//Added by qt3to4:
#include <QPixmap>
/***************************************************************************
                             sortoptionlistitem.h
                             ----------
    begin                : Fri Jun 02 2006
    copyright            : (C) 2006 by Thomas Baumgart
    email                : Thomas Baumgart <ipwizard@users.sourceforge.net>
 ***************************************************************************/

/***************************************************************************
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 ***************************************************************************/

// Note: This file will be included from transactionsortoption.ui.h

static const char * sortAscendingXpm[] = {
"16 16 145 2",
"  	c None",
". 	c #3368C9",
"+ 	c #4276D5",
"@ 	c #5284E0",
"# 	c #6C95E0",
"$ 	c #6A93DF",
"% 	c #5585DF",
"& 	c #3F72D2",
"* 	c #356ACD",
"= 	c #487AD7",
"- 	c #4F84E6",
"; 	c #B4C9EF",
"> 	c #BFD1F2",
", 	c #D5E1F5",
"' 	c #C9D7F2",
") 	c #A3BCEA",
"! 	c #6A97EB",
"~ 	c #3573E7",
"{ 	c #376FD5",
"] 	c #4378DA",
"^ 	c #6B94E1",
"/ 	c #D7E2F6",
"( 	c #E3EAF8",
"_ 	c #CDDAF4",
": 	c #BED0EF",
"< 	c #94B5F0",
"[ 	c #4485FB",
"} 	c #3A7EFB",
"| 	c #3777ED",
"1 	c #386FD4",
"2 	c #4E83E7",
"3 	c #D5E0F6",
"4 	c #CADAF7",
"5 	c #C3D5F6",
"6 	c #AEC7F5",
"7 	c #C1D4F5",
"8 	c #BBCFF4",
"9 	c #9BB8F0",
"0 	c #86B0FD",
"a 	c #639AFE",
"b 	c #3B7FFB",
"c 	c #3574E8",
"d 	c #376AC8",
"e 	c #4075DA",
"f 	c #A9C2F2",
"g 	c #E0E8F7",
"h 	c #C5D6F6",
"i 	c #FBFCFE",
"j 	c #F8FAFE",
"k 	c #FDFEFE",
"l 	c #FEFEFE",
"m 	c #F7F9FD",
"n 	c #FAFCFE",
"o 	c #A5C5FE",
"p 	c #4285FE",
"q 	c #4281F7",
"r 	c #366DD3",
"s 	c #467DE3",
"t 	c #B6CCF3",
"u 	c #DBE5F6",
"v 	c #D1DDF5",
"w 	c #E7EDF9",
"x 	c #DAE5F8",
"y 	c #E2EBFB",
"z 	c #CDDFFE",
"A 	c #508EFD",
"B 	c #4C88F5",
"C 	c #477CDF",
"D 	c #6290E5",
"E 	c #CFDCF3",
"F 	c #A7C0ED",
"G 	c #8FB0ED",
"H 	c #EEF3FC",
"I 	c #BFD6FD",
"J 	c #4F8BF7",
"K 	c #6696ED",
"L 	c #5584DC",
"M 	c #3A67BB",
"N 	c #608EE4",
"O 	c #C3D3F1",
"P 	c #A4BEED",
"Q 	c #E5EDFB",
"R 	c #EFF5FE",
"S 	c #DBE8FE",
"T 	c #FDFDFE",
"U 	c #C8DAFA",
"V 	c #779FE7",
"W 	c #5C88D9",
"X 	c #3B67BA",
"Y 	c #9DBAEC",
"Z 	c #A8C1EC",
"` 	c #EBF2FE",
" .	c #A6C5FE",
"..	c #B6CFFE",
"+.	c #FCFDFE",
"@.	c #DAE5F9",
"#.	c #83A7E9",
"$.	c #7EA2E4",
"%.	c #5E88D7",
"&.	c #3D73D6",
"*.	c #87A9E8",
"=.	c #9CB7EA",
"-.	c #D1DEF7",
";.	c #A8C7FE",
">.	c #669CFE",
",.	c #8CB4FD",
"'.	c #D6E2F7",
").	c #89AAE7",
"!.	c #83A4E3",
"~.	c #4675CE",
"{.	c #477DE1",
"].	c #84A6E5",
"^.	c #B9CDF2",
"/.	c #E4EDFE",
"(.	c #A6C6FE",
"_.	c #699DFD",
":.	c #4F8BF8",
"<.	c #739FEF",
"[.	c #D0DEF6",
"}.	c #BBCEF1",
"|.	c #88A8E5",
"1.	c #658DD8",
"2.	c #4973C2",
"3.	c #3F75DA",
"4.	c #4E82E3",
"5.	c #5F90EA",
"6.	c #669BFB",
"7.	c #5C95FC",
"8.	c #518CF7",
"9.	c #779FE8",
"0.	c #7298DD",
"a.	c #5880CB",
"b.	c #3C74DC",
"c.	c #3875E7",
"d.	c #4482F6",
"e.	c #4D89F5",
"f.	c #83A4E4",
"g.	c #5881CC",
"h.	c #356ED7",
"i.	c #477DE0",
"j.	c #5685DC",
"k.	c #5D88DA",
"l.	c #5E89D8",
"m.	c #4676CF",
"n.	c #4774C7",
"              . .               ",
"          + @ # $ % & *         ",
"      = - ; > , ' ) ! ~ {       ",
"    ] ^ / ( / _ : < [ } | 1     ",
"    2 3 4 5 6 7 8 9 0 a b c d   ",
"  e f g h i j k l m n o p q r   ",
"  s t u v w x y l l i z A B C   ",
"  D E _ : F G H l l l I J K L M ",
"  N O : P G Q l R S T U K V W X ",
"  s Y Z G Q l `  ...+.@.#.$.%.  ",
"  &.*.=.-.l ` ;.>.,.k '.).!.~.  ",
"    {.].^./.(._.:.<.[.}.|.1.2.  ",
"    3.4.5.6.7.8.K 9.).|.0.a.    ",
"      b.c.d.e.K V $.f.1.g.      ",
"          h.i.j.k.l.m.n.        ",
"                                "};


static const char * sortDescendingXpm[] = {
"16 16 145 2",
"  	c None",
". 	c #3D73D6",
"+ 	c #467DE3",
"@ 	c #608EE4",
"# 	c #6290E5",
"$ 	c #4075DA",
"% 	c #3F75DA",
"& 	c #477DE1",
"* 	c #87A9E8",
"= 	c #9DBAEC",
"- 	c #C3D3F1",
"; 	c #CFDCF3",
"> 	c #B6CCF3",
", 	c #A9C2F2",
"' 	c #4E83E7",
") 	c #4378DA",
"! 	c #3C74DC",
"~ 	c #4E82E3",
"{ 	c #84A6E5",
"] 	c #9CB7EA",
"^ 	c #A8C1EC",
"/ 	c #BED0EF",
"( 	c #CDDAF4",
"_ 	c #DBE5F6",
": 	c #E0E8F7",
"< 	c #D5E0F6",
"[ 	c #6B94E1",
"} 	c #487AD7",
"| 	c #3875E7",
"1 	c #5F90EA",
"2 	c #B9CDF2",
"3 	c #D1DEF7",
"4 	c #8FB0ED",
"5 	c #A4BEED",
"6 	c #D1DDF5",
"7 	c #C5D6F6",
"8 	c #CADAF7",
"9 	c #D7E2F6",
"0 	c #4F84E6",
"a 	c #356ED7",
"b 	c #4482F6",
"c 	c #669BFB",
"d 	c #E4EDFE",
"e 	c #FEFEFE",
"f 	c #E5EDFB",
"g 	c #A7C0ED",
"h 	c #E7EDF9",
"i 	c #FBFCFE",
"j 	c #C3D5F6",
"k 	c #E3EAF8",
"l 	c #B4C9EF",
"m 	c #4276D5",
"n 	c #477DE0",
"o 	c #4D89F5",
"p 	c #5C95FC",
"q 	c #A6C6FE",
"r 	c #EBF2FE",
"s 	c #DAE5F8",
"t 	c #F8FAFE",
"u 	c #AEC7F5",
"v 	c #BFD1F2",
"w 	c #5284E0",
"x 	c #5685DC",
"y 	c #6696ED",
"z 	c #518CF7",
"A 	c #699DFD",
"B 	c #A8C7FE",
"C 	c #EEF3FC",
"D 	c #E2EBFB",
"E 	c #FDFEFE",
"F 	c #C1D4F5",
"G 	c #D5E1F5",
"H 	c #6C95E0",
"I 	c #3368C9",
"J 	c #5D88DA",
"K 	c #779FE7",
"L 	c #4F8BF8",
"M 	c #669CFE",
"N 	c #A6C5FE",
"O 	c #EFF5FE",
"P 	c #BBCFF4",
"Q 	c #C9D7F2",
"R 	c #6A93DF",
"S 	c #5E89D8",
"T 	c #7EA2E4",
"U 	c #779FE8",
"V 	c #739FEF",
"W 	c #8CB4FD",
"X 	c #B6CFFE",
"Y 	c #DBE8FE",
"Z 	c #F7F9FD",
"` 	c #9BB8F0",
" .	c #94B5F0",
"..	c #A3BCEA",
"+.	c #5585DF",
"@.	c #4676CF",
"#.	c #83A4E4",
"$.	c #89AAE7",
"%.	c #D0DEF6",
"&.	c #FCFDFE",
"*.	c #FDFDFE",
"=.	c #FAFCFE",
"-.	c #86B0FD",
";.	c #4485FB",
">.	c #6A97EB",
",.	c #3F72D2",
"'.	c #4774C7",
").	c #658DD8",
"!.	c #88A8E5",
"~.	c #BBCEF1",
"{.	c #D6E2F7",
"].	c #DAE5F9",
"^.	c #C8DAFA",
"/.	c #BFD6FD",
"(.	c #CDDFFE",
"_.	c #A5C5FE",
":.	c #639AFE",
"<.	c #3A7EFB",
"[.	c #3573E7",
"}.	c #356ACD",
"|.	c #5881CC",
"1.	c #7298DD",
"2.	c #83A7E9",
"3.	c #4F8BF7",
"4.	c #508EFD",
"5.	c #4285FE",
"6.	c #3B7FFB",
"7.	c #3777ED",
"8.	c #376FD5",
"9.	c #5880CB",
"0.	c #83A4E3",
"a.	c #4C88F5",
"b.	c #4281F7",
"c.	c #3574E8",
"d.	c #386FD4",
"e.	c #4973C2",
"f.	c #4675CE",
"g.	c #5E88D7",
"h.	c #5C88D9",
"i.	c #5584DC",
"j.	c #477CDF",
"k.	c #366DD3",
"l.	c #376AC8",
"m.	c #3B67BA",
"n.	c #3A67BB",
"                                ",
"          . + @ # + $           ",
"      % & * = - ; > , ' )       ",
"    ! ~ { ] ^ / ( _ : < [ }     ",
"    | 1 2 3 4 5 / 6 7 8 9 0     ",
"  a b c d e f 4 g h i j k l m   ",
"  n o p q r e f 4 s t u 9 v w   ",
"  x y z A B r e C D E F ( G H I ",
"  J K y L M N O e e e P / Q R I ",
"  S T U V W X Y e e Z `  ...+.  ",
"  @.#.$.%.E &.*.e i =.-.;.>.,.  ",
"  '.).!.~.{.].^./.(._.:.<.[.}.  ",
"    |.1.!.$.2.y 3.4.5.6.7.8.    ",
"      9.).0.T K y a.b.c.d.      ",
"        e.f.g.h.i.j.k.l.        ",
"              m.n.              "};

class SortOptionListItem : public K3ListViewItem
{
public:
  SortOptionListItem(Q3ListView* parent, Q3ListViewItem* after, const QString& txt, int direction);
  int direction(void) const;

public slots:
  void toggleDirection(void);

private:
  void setPixmap(void);
  
private:
  int m_direction;
};

SortOptionListItem::SortOptionListItem(Q3ListView* parent, Q3ListViewItem* after, const QString& txt, int direction) :
  K3ListViewItem(parent, after, txt)
{
  m_direction = (direction >= 0) ? 1 : -1;
  setPixmap();
}

void SortOptionListItem::setPixmap(void)
{
  if(m_direction > 0)
    K3ListViewItem::setPixmap(0, QPixmap(&sortAscendingXpm[0]));
  else
    K3ListViewItem::setPixmap(0, QPixmap(&sortDescendingXpm[0]));
}

void SortOptionListItem::toggleDirection(void)
{
  m_direction *= (-1);
  setPixmap();
}

int SortOptionListItem::direction(void) const
{
  return m_direction;
}

