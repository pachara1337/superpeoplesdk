// Enum XlntLib.ExcelUnderlineType
enum class ExcelUnderlineType : uint8 {
	None = 0,
	Double = 1,
	DoubleAccounting = 2,
	Single = 3,
	SingleAccounting = 4,
	ExcelUnderlineType_MAX = 5
};

// Enum XlntLib.ExcelFillType
enum class ExcelFillType : uint8 {
	Pattern = 0,
	Gradient = 1,
	ExcelFillType_MAX = 2
};

// Enum XlntLib.ExcelGradientFillType
enum class ExcelGradientFillType : uint8 {
	Linear = 0,
	Path = 1,
	ExcelGradientFillType_MAX = 2
};

// Enum XlntLib.ExcelPatternFillType
enum class ExcelPatternFillType : uint8 {
	None = 0,
	Solid = 1,
	Mediumgray = 2,
	Darkgray = 3,
	LightGray = 4,
	DarkHorizontal = 5,
	DarkVertical = 6,
	DarkDown = 7,
	DarkUp = 8,
	DarkGrid = 9,
	DarkTrellis = 10,
	LightHorizontal = 11,
	LightVertical = 12,
	LightDown = 13,
	LightUp = 14,
	LightGrid = 15,
	LightTrellis = 16,
	Gray125 = 17,
	Gray0625 = 18,
	ExcelPatternFillType_MAX = 19
};

// Enum XlntLib.ExcelColorType
enum class ExcelColorType : uint8 {
	Indexed = 0,
	Theme = 1,
	RGB = 2,
	ExcelColorType_MAX = 3
};

// Enum XlntLib.ExcelBorderStyle
enum class ExcelBorderStyle : uint8 {
	None = 0,
	DashDot = 1,
	DashDotDot = 2,
	Dashed = 3,
	Dotted = 4,
	Double = 5,
	Hair = 6,
	Medium = 7,
	MediumDashDot = 8,
	MediumDashDotDot = 9,
	MediumDashed = 10,
	SlantDashDot = 11,
	Thick = 12,
	Thin = 13,
	ExcelBorderStyle_MAX = 14
};

// Enum XlntLib.ExcelBorderSideType
enum class ExcelBorderSideType : uint8 {
	Start = 0,
	End = 1,
	Top = 2,
	Bottom = 3,
	Diagonal = 4,
	Vertical = 5,
	Horizontal = 6,
	ExcelBorderSideType_MAX = 7
};

// Enum XlntLib.ExcelBorderDiagonalDirection
enum class ExcelBorderDiagonalDirection : uint8 {
	None = 0,
	Up = 1,
	Down = 2,
	Both = 3,
	ExcelBorderDiagonalDirection_MAX = 4
};

// Enum XlntLib.ExcelVerticalAlignment
enum class ExcelVerticalAlignment : uint8 {
	Top = 0,
	Center = 1,
	Bottom = 2,
	Justify = 3,
	Distributed = 4,
	ExcelVerticalAlignment_MAX = 5
};

// Enum XlntLib.ExcelHorizontalAlignment
enum class ExcelHorizontalAlignment : uint8 {
	General = 0,
	Left = 1,
	Center = 2,
	Right = 3,
	Fill = 4,
	Justify = 5,
	CenterContinuous = 6,
	Distributed = 7,
	ExcelHorizontalAlignment_MAX = 8
};

// Enum XlntLib.ExcelExtendedProperty
enum class ExcelExtendedProperty : uint8 {
	Application = 0,
	AppVersion = 1,
	Characters = 2,
	CharactersWithWpaces = 3,
	Company = 4,
	Digsig = 5,
	DocSecurity = 6,
	HeadingPairs = 7,
	HiddenSlides = 8,
	HLinks = 9,
	HyperlinkBase = 10,
	HyperlinksChanged = 11,
	Lines = 12,
	LinksUpToDate = 13,
	Manager = 14,
	MMClips = 15,
	Notes = 16,
	Pages = 17,
	Paragraphs = 18,
	PresentationFormat = 19,
	ScaleCrop = 20,
	SharedDoc = 21,
	Slides = 22,
	Template = 23,
	TitlesOfParts = 24,
	TotalTime = 25,
	Words = 26,
	ExcelExtendedProperty_MAX = 27
};

// Enum XlntLib.ExcelCoreProperty
enum class ExcelCoreProperty : uint8 {
	Category = 0,
	Content_status = 1,
	Created = 2,
	Creator = 3,
	Description = 4,
	Identifier = 5,
	Keywords = 6,
	Language = 7,
	LastModifiedBy = 8,
	LastPrinted = 9,
	Modified = 10,
	Revision = 11,
	Subject = 12,
	Title = 13,
	Version = 14,
	ExcelCoreProperty_MAX = 15
};

// Enum XlntLib.ExcelCellType
enum class ExcelCellType : uint8 {
	Empty = 0,
	Boolean = 1,
	Date = 2,
	Error = 3,
	InlineString = 4,
	Number = 5,
	SharedString = 6,
	FormulaString = 7,
	ExcelCellType_MAX = 8
};

// Enum XlntLib.ExcelBaseDate
enum class ExcelBaseDate : uint8 {
	Windows1900 = 0,
	Mac1904 = 1,
	ExcelBaseDate_MAX = 2
};

// Enum XlntLib.ExcelVariantType
enum class ExcelVariantType : uint8 {
	None = 0,
	Bool = 1,
	Int32 = 2,
	String = 3,
	DateTime = 4,
	Array = 5,
	ExcelVariantType_MAX = 6
};

// Enum XlntLib.ExcelSortType
enum class ExcelSortType : uint8 {
	None = 0,
	Ascending = 1,
	Descending = 2,
	ExcelSortType_MAX = 3
};

// ScriptStruct XlntLib.ExcelAlignment
// Size: 0x2cff6a10 (Inherited: 0x00)
struct FExcelAlignment {
	bool ShrinkToFit; // 0x00(0x01)
	bool WrapText; // 0x01(0x01)
	char pad_2[0x2]; // 0x02(0x02)
	int32_t Indent; // 0x04(0x04)
	int32_t TextRotation; // 0x08(0x04)
	enum class ExcelHorizontalAlignment HorizontalAlignment; // 0x0c(0x01)
	enum class ExcelVerticalAlignment VerticalAlignment; // 0x0d(0x01)
	char pad_E[0x2cff6a02]; // 0x0e(0x2cff6a02)
};

// ScriptStruct XlntLib.ExcelBorder
// Size: 0x2cff6a00 (Inherited: 0x00)
struct FExcelBorder {
	struct FExcelBorderSide Start; // 0x00(0x24)
	struct FExcelBorderSide End; // 0x24(0x24)
	struct FExcelBorderSide Top; // 0x48(0x24)
	struct FExcelBorderSide Bottom; // 0x6c(0x24)
	struct FExcelBorderSide Horizontal; // 0x90(0x24)
	struct FExcelBorderSide Vertical; // 0xb4(0x24)
	struct FExcelBorderSide Diagonal; // 0xd8(0x24)
	enum class ExcelBorderDiagonalDirection DiagonalDirection; // 0xfc(0x01)
	char pad_FD[0x2cff6903]; // 0xfd(0x2cff6903)
};

// ScriptStruct XlntLib.ExcelBorderSide
// Size: 0x2cff6c24 (Inherited: 0x00)
struct FExcelBorderSide {
	struct FExcelColor Color; // 0x00(0x20)
	enum class ExcelBorderStyle Style; // 0x20(0x01)
	char pad_21[0x2cff6c03]; // 0x21(0x2cff6c03)
};

// ScriptStruct XlntLib.ExcelColor
// Size: 0x2cff6b20 (Inherited: 0x00)
struct FExcelColor {
	enum class ExcelColorType Type; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32_t ColorIndex; // 0x04(0x04)
	struct FLinearColor ColorValue; // 0x08(0x10)
	float Tint; // 0x18(0x04)
	bool IsAutoColor; // 0x1c(0x01)
	char pad_1D[0x2cff6b03]; // 0x1d(0x2cff6b03)
};

// ScriptStruct XlntLib.ExcelCellRangeReference
// Size: 0x2cff6a10 (Inherited: 0x00)
struct FExcelCellRangeReference {
	struct FExcelCellReference TopLeft; // 0x00(0x08)
	struct FExcelCellReference BottomRight; // 0x08(0x08)
	char pad_10[0x2cff6a00]; // 0x10(0x2cff6a00)
};

// ScriptStruct XlntLib.ExcelCellReference
// Size: 0x2cff6a08 (Inherited: 0x00)
struct FExcelCellReference {
	int32_t Column; // 0x00(0x04)
	int32_t Row; // 0x04(0x04)
	char pad_8[0x2cff6a00]; // 0x08(0x2cff6a00)
};

// ScriptStruct XlntLib.ExcelFill
// Size: 0x2cff69b0 (Inherited: 0x00)
struct FExcelFill {
	enum class ExcelFillType Type; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FExcelPatternFill PatternFill; // 0x04(0x44)
	struct FExcelGradientFill GradientFill; // 0x48(0x68)
	char pad_B0[0x2cff6900]; // 0xb0(0x2cff6900)
};

// ScriptStruct XlntLib.ExcelGradientFill
// Size: 0x2cff6968 (Inherited: 0x00)
struct FExcelGradientFill {
	enum class ExcelGradientFillType Type; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float Degree; // 0x04(0x04)
	struct FMargin Distance; // 0x08(0x10)
	struct TMap<float, struct FExcelColor> Stops; // 0x18(0x50)
	char pad_68[0x2cff6900]; // 0x68(0x2cff6900)
};

// ScriptStruct XlntLib.ExcelPatternFill
// Size: 0x2cff6944 (Inherited: 0x00)
struct FExcelPatternFill {
	enum class ExcelPatternFillType Type; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FExcelColor ForegroundColor; // 0x04(0x20)
	struct FExcelColor BackgroundColor; // 0x24(0x20)
	char pad_44[0x2cff6900]; // 0x44(0x2cff6900)
};

// ScriptStruct XlntLib.ExcelFont
// Size: 0x2cff6958 (Inherited: 0x00)
struct FExcelFont {
	struct FString Name; // 0x00(0x10)
	float Size; // 0x10(0x04)
	bool IsBold; // 0x14(0x01)
	bool IsItalic; // 0x15(0x01)
	bool IsSuperScript; // 0x16(0x01)
	bool IsStrikeThrough; // 0x17(0x01)
	bool IsOutline; // 0x18(0x01)
	bool IsShadow; // 0x19(0x01)
	enum class ExcelUnderlineType UnderlineType; // 0x1a(0x01)
	char pad_1B[0x1]; // 0x1b(0x01)
	struct FExcelColor Color; // 0x1c(0x20)
	int32_t Family; // 0x3c(0x04)
	int32_t Charset; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)
	struct FString Scheme; // 0x48(0x10)
	char pad_58[0x2cff6900]; // 0x58(0x2cff6900)
};

// ScriptStruct XlntLib.ExcelNumberFormat
// Size: 0x2cff6a18 (Inherited: 0x00)
struct FExcelNumberFormat {
	int32_t ID; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FString FormatString; // 0x08(0x10)
	char pad_18[0x2cff6a00]; // 0x18(0x2cff6a00)
};

// ScriptStruct XlntLib.ExcelProtection
// Size: 0x2cff6a02 (Inherited: 0x00)
struct FExcelProtection {
	bool IsLocked; // 0x00(0x01)
	bool IsHidden; // 0x01(0x01)
	char pad_2[0x2cff6a00]; // 0x02(0x2cff6a00)
};

// ScriptStruct XlntLib.ExcelVariant
// Size: 0x2cff6930 (Inherited: 0x00)
struct FExcelVariant {
	char pad_0[0x2cff6930]; // 0x00(0x2cff6930)
};

