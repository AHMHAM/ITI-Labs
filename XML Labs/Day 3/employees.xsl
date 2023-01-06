<?xml version="1.0" encoding="UTF-8"?>
<?xml-stylesheet type="text/xsl" href="employees.xsl"?>
<xsl:stylesheet version="1.0" xmlns:xsl="http://www.w3.org/1999/XSL/Transform">
<xsl:template match="/">
<html>
<body>
<h2>Employee List</h2>
<table border="1">
    <tr bgcolor="rgb(255,235,205)">
        <th>Name</th>
        <th>Phones</th>
        <th>Addresses</th>
        <th>Email</th>
    </tr>
    <xsl:for-each select="employees/employee">
    <tr>     
            <td>
                <xsl:value-of select="name" />
            </td>
            <td>
            <xsl:for-each select="phones/phone">                                      
				<xsl:value-of select="."/>
				<br></br>
            </xsl:for-each>
            </td>
            <td>
            <xsl:for-each select="addresses/address">
                <xsl:value-of select="buildingNumber"/>
                <xsl:value-of select="street"/>
                <xsl:value-of select="region"/>
                <xsl:value-of select="city"/>
                <xsl:value-of select="country"/>
                <br></br>
            </xsl:for-each>
            </td>
            <td>
                <xsl:value-of select="email" />
            </td>   
    </tr>
    </xsl:for-each>	
</table>
</body>
</html>
</xsl:template>
</xsl:stylesheet>
