// Class XlntLib.DirectExcelLibrary
// Size: 0x2cff6a30 (Inherited: 0x2cff6a30)
struct UDirectExcelLibrary : UBlueprintFunctionLibrary {

	struct FString ToAbsolutePath(struct FString projectReleativePath, bool isSave); // Function XlntLib.DirectExcelLibrary.ToAbsolutePath // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x1579d00
	bool SaveExcel(struct UExcelWorkbook* workbook, struct FString Path, bool isAbsolutePath, bool isSave); // Function XlntLib.DirectExcelLibrary.SaveExcel // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x15793c0
	struct UExcelWorkbook* LoadExcel(struct FString Path, bool isAbsolutePath, bool isSave); // Function XlntLib.DirectExcelLibrary.LoadExcel // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1578a50
	bool DoesExcelFileExists(struct FString Path, bool isAbsolutePath, bool isSave); // Function XlntLib.DirectExcelLibrary.DoesExcelFileExists // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x1577e30
	struct UExcelWorkbook* CreateExcel(); // Function XlntLib.DirectExcelLibrary.CreateExcel // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1577e00
};

// Class XlntLib.ExcelCell
// Size: 0x2cff6a40 (Inherited: 0x2cff6930)
struct UExcelCell : UObject {
	char pad_2CFF6930[0x110]; // 0x2cff6930(0x110)

	enum class ExcelCellType Type(); // Function XlntLib.ExcelCell.Type // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x157a3e0
	struct UObject* ToUObject(); // Function XlntLib.ExcelCell.ToUObject // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x157a3b0
	struct FString ToString(); // Function XlntLib.ExcelCell.ToString // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x157a180
	int32_t ToInt(); // Function XlntLib.ExcelCell.ToInt // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x157a0c0
	float ToFloat(); // Function XlntLib.ExcelCell.ToFloat // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x157a090
	struct FDateTime ToDateTime(); // Function XlntLib.ExcelCell.ToDateTime // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x157a050
	bool ToBool(); // Function XlntLib.ExcelCell.ToBool // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1579e70
	void SetString(struct FString Value); // Function XlntLib.ExcelCell.SetString // (Final|Native|Public|BlueprintCallable) // @ game+0x1579c10
	void SetInt(int32_t Value); // Function XlntLib.ExcelCell.SetInt // (Final|Native|Public|BlueprintCallable) // @ game+0x1579b90
	void SetHyperlink(struct FString URL, struct FString display); // Function XlntLib.ExcelCell.SetHyperlink // (Final|Native|Public|BlueprintCallable) // @ game+0x1579a00
	void SetFormula(struct FString formula); // Function XlntLib.ExcelCell.SetFormula // (Final|Native|Public|BlueprintCallable) // @ game+0x1579910
	void SetFormat(struct UExcelFormat* Format); // Function XlntLib.ExcelCell.SetFormat // (Final|Native|Public|BlueprintCallable) // @ game+0x1579890
	void SetFloat(float Value); // Function XlntLib.ExcelCell.SetFloat // (Final|Native|Public|BlueprintCallable) // @ game+0x1579810
	void SetDateTime(struct FDateTime Value); // Function XlntLib.ExcelCell.SetDateTime // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x1579790
	void SetComment(struct FString Text, struct FString Author); // Function XlntLib.ExcelCell.SetComment // (Final|Native|Public|BlueprintCallable) // @ game+0x1579600
	void SetBool(bool Value); // Function XlntLib.ExcelCell.SetBool // (Final|Native|Public|BlueprintCallable) // @ game+0x1579570
	int32_t Row(); // Function XlntLib.ExcelCell.Row // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1579390
	struct FExcelCellReference Reference(); // Function XlntLib.ExcelCell.Reference // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1579350
	struct UExcelWorksheet* ParentSheet(); // Function XlntLib.ExcelCell.ParentSheet // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1579320
	bool NotEqual_ExcelCellExcelCell(struct UExcelCell* A, struct UExcelCell* B); // Function XlntLib.ExcelCell.NotEqual_ExcelCellExcelCell // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x15790a0
	struct UExcelCell* MakeCellWithOffset(int32_t columnOffset, int32_t rowOffset); // Function XlntLib.ExcelCell.MakeCellWithOffset // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x1578db0
	bool LessEqual_ExcelCellExcelCell(struct UExcelCell* A, struct UExcelCell* B); // Function XlntLib.ExcelCell.LessEqual_ExcelCellExcelCell // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x15788b0
	bool Less_ExcelCellExcelCell(struct UExcelCell* A, struct UExcelCell* B); // Function XlntLib.ExcelCell.Less_ExcelCellExcelCell // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x1578980
	bool IsValid(); // Function XlntLib.ExcelCell.IsValid // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1578860
	bool IsMerged(); // Function XlntLib.ExcelCell.IsMerged // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x15787a0
	bool HasValue(); // Function XlntLib.ExcelCell.HasValue // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x15786e0
	bool HasHyperlink(); // Function XlntLib.ExcelCell.HasHyperlink // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x15786b0
	bool HasFormula(); // Function XlntLib.ExcelCell.HasFormula // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1578680
	bool HasFormat(); // Function XlntLib.ExcelCell.HasFormat // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1578650
	bool HasComment(); // Function XlntLib.ExcelCell.HasComment // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1578620
	bool GreaterEqual_ExcelCellExcelCell(struct UExcelCell* A, struct UExcelCell* B); // Function XlntLib.ExcelCell.GreaterEqual_ExcelCellExcelCell // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x1578480
	bool Greater_ExcelCellExcelCell(struct UExcelCell* A, struct UExcelCell* B); // Function XlntLib.ExcelCell.Greater_ExcelCellExcelCell // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x1578550
	struct FString GetHyperlink(); // Function XlntLib.ExcelCell.GetHyperlink // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1578400
	struct FString GetFormula(); // Function XlntLib.ExcelCell.GetFormula // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1578380
	struct UExcelFormat* GetFormat(); // Function XlntLib.ExcelCell.GetFormat // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1578350
	void GetComment(struct FString& Text, struct FString& Author); // Function XlntLib.ExcelCell.GetComment // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x1578220
	bool EqualEqual_ExcelCellExcelCell(struct UExcelCell* A, struct UExcelCell* B); // Function XlntLib.ExcelCell.EqualEqual_ExcelCellExcelCell // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x1577fa0
	int32_t Compare(struct UExcelCell* Other); // Function XlntLib.ExcelCell.Compare // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1577d70
	int32_t Column(); // Function XlntLib.ExcelCell.Column // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1577d40
	void ClearFormula(); // Function XlntLib.ExcelCell.ClearFormula // (Final|Native|Public|BlueprintCallable) // @ game+0x1577d20
	void ClearFormat(); // Function XlntLib.ExcelCell.ClearFormat // (Final|Native|Public|BlueprintCallable) // @ game+0x1577d00
	void ClearComment(); // Function XlntLib.ExcelCell.ClearComment // (Final|Native|Public|BlueprintCallable) // @ game+0x1577ce0
	void Clear(); // Function XlntLib.ExcelCell.Clear // (Final|Native|Public|BlueprintCallable) // @ game+0x1577cc0
};

// Class XlntLib.ExcelCellRangeReferenceLibrary
// Size: 0x2cff6a30 (Inherited: 0x2cff6a30)
struct UExcelCellRangeReferenceLibrary : UBlueprintFunctionLibrary {

	int32_t Width(struct FExcelCellRangeReference rangeReference); // Function XlntLib.ExcelCellRangeReferenceLibrary.Width // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x157a410
	struct FString ToString(struct FExcelCellRangeReference rangeReference); // Function XlntLib.ExcelCellRangeReferenceLibrary.ToString // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x157a200
	struct FExcelCellRangeReference ToRange(struct FExcelCellReference cellRef); // Function XlntLib.ExcelCellRangeReferenceLibrary.ToRange // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x157a0f0
	bool NotEqual_ExcelCellRangeReference(struct FExcelCellRangeReference A, struct FExcelCellRangeReference B); // Function XlntLib.ExcelCellRangeReferenceLibrary.NotEqual_ExcelCellRangeReference // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x1579170
	struct FExcelCellRangeReference MoveBy(struct FExcelCellRangeReference rangeReference, int32_t columnOffset, int32_t rowOffset); // Function XlntLib.ExcelCellRangeReferenceLibrary.MoveBy // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x1578e70
	struct FExcelCellRangeReference MakeCellRangeWithString(struct FString rangeString); // Function XlntLib.ExcelCellRangeReferenceLibrary.MakeCellRangeWithString // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x1578bc0
	bool IsSingleCell(struct FExcelCellRangeReference rangeReference); // Function XlntLib.ExcelCellRangeReferenceLibrary.IsSingleCell // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x15787d0
	int32_t Height(struct FExcelCellRangeReference rangeReference); // Function XlntLib.ExcelCellRangeReferenceLibrary.Height // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x1578710
	bool Equal_ExcelCellRangeReference(struct FExcelCellRangeReference A, struct FExcelCellRangeReference B); // Function XlntLib.ExcelCellRangeReferenceLibrary.Equal_ExcelCellRangeReference // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x1578070
};

// Class XlntLib.ExcelCellReferenceLibrary
// Size: 0x2cff6a30 (Inherited: 0x2cff6a30)
struct UExcelCellReferenceLibrary : UBlueprintFunctionLibrary {

	struct FString ToString(struct FExcelCellReference cellRef); // Function XlntLib.ExcelCellReferenceLibrary.ToString // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x157a2e0
	struct FString ToColumnString(int32_t columnIndex); // Function XlntLib.ExcelCellReferenceLibrary.ToColumnString // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x1579f90
	int32_t ToColumnIndex(struct FString columString); // Function XlntLib.ExcelCellReferenceLibrary.ToColumnIndex // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x1579ea0
	bool NotEqual_ExcelCellReference(struct FExcelCellReference A, struct FExcelCellReference B); // Function XlntLib.ExcelCellReferenceLibrary.NotEqual_ExcelCellReference // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x1579250
	struct FExcelCellReference MoveBy(struct FExcelCellReference cellRef, int32_t columnOffset, int32_t rowOffset); // Function XlntLib.ExcelCellReferenceLibrary.MoveBy // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x1578f90
	struct FExcelCellReference MakeCellReferenceWithString(struct FString referenceString); // Function XlntLib.ExcelCellReferenceLibrary.MakeCellReferenceWithString // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x1578cc0
	bool Equal_ExcelCellReference(struct FExcelCellReference A, struct FExcelCellReference B); // Function XlntLib.ExcelCellReferenceLibrary.Equal_ExcelCellReference // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x1578150
};

// Class XlntLib.ExcelFormat
// Size: 0x2cff6a40 (Inherited: 0x2cff6930)
struct UExcelFormat : UObject {
	char pad_2CFF6930[0x110]; // 0x2cff6930(0x110)

	void SetProtection(struct FExcelProtection protection); // Function XlntLib.ExcelFormat.SetProtection // (Final|Native|Public|BlueprintCallable) // @ game+0x15808d0
	void SetNumberFormat(struct FExcelNumberFormat numberFormat); // Function XlntLib.ExcelFormat.SetNumberFormat // (Final|Native|Public|BlueprintCallable) // @ game+0x15807d0
	void SetFont(struct FExcelFont Font); // Function XlntLib.ExcelFormat.SetFont // (Final|Native|Public|BlueprintCallable) // @ game+0x1580450
	void SetFill(struct FExcelFill fill); // Function XlntLib.ExcelFormat.SetFill // (Final|Native|Public|BlueprintCallable) // @ game+0x1580200
	void SetBorder(struct FExcelBorder Border); // Function XlntLib.ExcelFormat.SetBorder // (Final|Native|Public|BlueprintCallable) // @ game+0x157feb0
	void SetAlignment(struct FExcelAlignment Alignment); // Function XlntLib.ExcelFormat.SetAlignment // (Final|Native|Public|BlueprintCallable) // @ game+0x157fc30
	struct UExcelCell* ParentCell(); // Function XlntLib.ExcelFormat.ParentCell // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1579320
	bool IsQuotePrefix(); // Function XlntLib.ExcelFormat.IsQuotePrefix // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x157dee0
	bool IsProtectionApplied(); // Function XlntLib.ExcelFormat.IsProtectionApplied // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x157deb0
	bool IsPivotTable(); // Function XlntLib.ExcelFormat.IsPivotTable // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x157de80
	bool IsNumberFormatApplied(); // Function XlntLib.ExcelFormat.IsNumberFormatApplied // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x157de50
	bool IsFontApplied(); // Function XlntLib.ExcelFormat.IsFontApplied // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x157de20
	bool IsFillApplied(); // Function XlntLib.ExcelFormat.IsFillApplied // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x157ddf0
	bool IsBorderApplied(); // Function XlntLib.ExcelFormat.IsBorderApplied // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x157ddc0
	bool IsAlignmentApplied(); // Function XlntLib.ExcelFormat.IsAlignmentApplied // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x157dd90
	struct FExcelProtection GetProtection(); // Function XlntLib.ExcelFormat.GetProtection // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x157dbb0
	struct FExcelNumberFormat GetNumberFormat(); // Function XlntLib.ExcelFormat.GetNumberFormat // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x157db20
	struct FExcelFont GetFont(); // Function XlntLib.ExcelFormat.GetFont // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x157da00
	struct FExcelFill GetFill(); // Function XlntLib.ExcelFormat.GetFill // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x157d900
	struct FExcelBorder GetBorder(); // Function XlntLib.ExcelFormat.GetBorder // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x157d870
	struct FExcelAlignment GetAlignment(); // Function XlntLib.ExcelFormat.GetAlignment // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x157d830
	void EnableQuotePrefix(bool Value); // Function XlntLib.ExcelFormat.EnableQuotePrefix // (Final|Native|Public|BlueprintCallable) // @ game+0x157d7a0
	void EnablePivotTable(bool Value); // Function XlntLib.ExcelFormat.EnablePivotTable // (Final|Native|Public|BlueprintCallable) // @ game+0x157d710
};

// Class XlntLib.ExcelNumberFormatLibrary
// Size: 0x2cff6a30 (Inherited: 0x2cff6a30)
struct UExcelNumberFormatLibrary : UBlueprintFunctionLibrary {

	struct FExcelNumberFormat MakeNumberFormat_Text(); // Function XlntLib.ExcelNumberFormatLibrary.MakeNumberFormat_Text // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x157ee10
	struct FExcelNumberFormat MakeNumberFormat_Percentage00(); // Function XlntLib.ExcelNumberFormatLibrary.MakeNumberFormat_Percentage00 // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x157ecd0
	struct FExcelNumberFormat MakeNumberFormat_Percentage(); // Function XlntLib.ExcelNumberFormatLibrary.MakeNumberFormat_Percentage // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x157ed70
	struct FExcelNumberFormat MakeNumberFormat_NumberCommaSeparated1(); // Function XlntLib.ExcelNumberFormatLibrary.MakeNumberFormat_NumberCommaSeparated1 // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x157ec30
	struct FExcelNumberFormat MakeNumberFormat_Number00(); // Function XlntLib.ExcelNumberFormatLibrary.MakeNumberFormat_Number00 // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x157eaf0
	struct FExcelNumberFormat MakeNumberFormat_Number(); // Function XlntLib.ExcelNumberFormatLibrary.MakeNumberFormat_Number // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x157eb90
	struct FExcelNumberFormat MakeNumberFormat_General(); // Function XlntLib.ExcelNumberFormatLibrary.MakeNumberFormat_General // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x157ea50
	struct FExcelNumberFormat MakeNumberFormat_Date_yyyymmdd2(); // Function XlntLib.ExcelNumberFormatLibrary.MakeNumberFormat_Date_yyyymmdd2 // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x157e9b0
	struct FExcelNumberFormat MakeNumberFormat_Date_yymmdd(); // Function XlntLib.ExcelNumberFormatLibrary.MakeNumberFormat_Date_yymmdd // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x157e910
	struct FExcelNumberFormat MakeNumberFormat_Date_xlsx22(); // Function XlntLib.ExcelNumberFormatLibrary.MakeNumberFormat_Date_xlsx22 // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x157e870
	struct FExcelNumberFormat MakeNumberFormat_Date_xlsx17(); // Function XlntLib.ExcelNumberFormatLibrary.MakeNumberFormat_Date_xlsx17 // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x157e7d0
	struct FExcelNumberFormat MakeNumberFormat_Date_xlsx16(); // Function XlntLib.ExcelNumberFormatLibrary.MakeNumberFormat_Date_xlsx16 // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x157e730
	struct FExcelNumberFormat MakeNumberFormat_Date_xlsx15(); // Function XlntLib.ExcelNumberFormatLibrary.MakeNumberFormat_Date_xlsx15 // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x157e690
	struct FExcelNumberFormat MakeNumberFormat_Date_xlsx14(); // Function XlntLib.ExcelNumberFormatLibrary.MakeNumberFormat_Date_xlsx14 // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x157e5f0
	struct FExcelNumberFormat MakeNumberFormat_Date_time6(); // Function XlntLib.ExcelNumberFormatLibrary.MakeNumberFormat_Date_time6 // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x157e4b0
	struct FExcelNumberFormat MakeNumberFormat_Date_time5(); // Function XlntLib.ExcelNumberFormatLibrary.MakeNumberFormat_Date_time5 // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x157e550
	struct FExcelNumberFormat MakeNumberFormat_Date_time4(); // Function XlntLib.ExcelNumberFormatLibrary.MakeNumberFormat_Date_time4 // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x157e4b0
	struct FExcelNumberFormat MakeNumberFormat_Date_time3(); // Function XlntLib.ExcelNumberFormatLibrary.MakeNumberFormat_Date_time3 // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x157e410
	struct FExcelNumberFormat MakeNumberFormat_Date_time2(); // Function XlntLib.ExcelNumberFormatLibrary.MakeNumberFormat_Date_time2 // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x157e370
	struct FExcelNumberFormat MakeNumberFormat_Date_time1(); // Function XlntLib.ExcelNumberFormatLibrary.MakeNumberFormat_Date_time1 // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x157e2d0
	struct FExcelNumberFormat MakeNumberFormat_Date_myminus(); // Function XlntLib.ExcelNumberFormatLibrary.MakeNumberFormat_Date_myminus // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x157e230
	struct FExcelNumberFormat MakeNumberFormat_Date_dmyslash(); // Function XlntLib.ExcelNumberFormatLibrary.MakeNumberFormat_Date_dmyslash // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x157e190
	struct FExcelNumberFormat MakeNumberFormat_Date_dmyminus(); // Function XlntLib.ExcelNumberFormatLibrary.MakeNumberFormat_Date_dmyminus // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x157e0f0
	struct FExcelNumberFormat MakeNumberFormat_Date_dmminus(); // Function XlntLib.ExcelNumberFormatLibrary.MakeNumberFormat_Date_dmminus // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x157e050
	struct FExcelNumberFormat MakeNumberFormat_Date_ddmmyyyy(); // Function XlntLib.ExcelNumberFormatLibrary.MakeNumberFormat_Date_ddmmyyyy // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x157dfb0
	struct FExcelNumberFormat MakeNumberFormat_Date_datetime(); // Function XlntLib.ExcelNumberFormatLibrary.MakeNumberFormat_Date_datetime // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x157df10
};

// Class XlntLib.ExcelVariantLibrary
// Size: 0x2cff6a30 (Inherited: 0x2cff6a30)
struct UExcelVariantLibrary : UBlueprintFunctionLibrary {

	struct FString ToString(struct FExcelVariant Value); // Function XlntLib.ExcelVariantLibrary.ToString // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x1581360
	int32_t ToInt(struct FExcelVariant Value); // Function XlntLib.ExcelVariantLibrary.ToInt // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x15811c0
	struct FDateTime ToDateTime(struct FExcelVariant Value); // Function XlntLib.ExcelVariantLibrary.ToDateTime // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x1581020
	bool ToBool(struct FExcelVariant Value); // Function XlntLib.ExcelVariantLibrary.ToBool // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x1580e80
	struct TArray<struct FExcelVariant> ToArray(struct FExcelVariant Value); // Function XlntLib.ExcelVariantLibrary.ToArray // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x1580bb0
	void SetString(struct FExcelVariant Target, struct FString Value); // Function XlntLib.ExcelVariantLibrary.SetString // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1580950
	void SetInt(struct FExcelVariant Target, int32_t Value); // Function XlntLib.ExcelVariantLibrary.SetInt // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x15805f0
	void SetDateTime(struct FExcelVariant Target, struct FDateTime Value); // Function XlntLib.ExcelVariantLibrary.SetDateTime // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0x1580020
	void SetBool(struct FExcelVariant Target, bool Value); // Function XlntLib.ExcelVariantLibrary.SetBool // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x157fcd0
	struct FExcelVariant MakeVariantWithStringArray(struct TArray<struct FString> Value); // Function XlntLib.ExcelVariantLibrary.MakeVariantWithStringArray // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x157f9c0
	struct FExcelVariant MakeVariantWithString(struct FString Value); // Function XlntLib.ExcelVariantLibrary.MakeVariantWithString // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x157f7c0
	struct FExcelVariant MakeVariantWithIntArray(struct TArray<int32_t> Value); // Function XlntLib.ExcelVariantLibrary.MakeVariantWithIntArray // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x157f620
	struct FExcelVariant MakeVariantWithInt(int32_t Value); // Function XlntLib.ExcelVariantLibrary.MakeVariantWithInt // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x157f530
	struct FExcelVariant MakeVariantWithDateVariantArray(struct TArray<struct FExcelVariant> Value); // Function XlntLib.ExcelVariantLibrary.MakeVariantWithDateVariantArray // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x157f3b0
	struct FExcelVariant MakeVariantWithDateTimeArray(struct TArray<struct FDateTime> Value); // Function XlntLib.ExcelVariantLibrary.MakeVariantWithDateTimeArray // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x157f210
	struct FExcelVariant MakeVariantWithDateTime(struct FDateTime Value); // Function XlntLib.ExcelVariantLibrary.MakeVariantWithDateTime // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x157f130
	struct FExcelVariant MakeVariantWithBoolArray(struct TArray<bool> Value); // Function XlntLib.ExcelVariantLibrary.MakeVariantWithBoolArray // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x157efa0
	struct FExcelVariant MakeVariantWithBool(bool Value); // Function XlntLib.ExcelVariantLibrary.MakeVariantWithBool // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x157eeb0
	enum class ExcelVariantType GetType(struct FExcelVariant Value); // Function XlntLib.ExcelVariantLibrary.GetType // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x157dbf0
};

// Class XlntLib.ExcelWorkbook
// Size: 0x2cff6a70 (Inherited: 0x2cff6930)
struct UExcelWorkbook : UObject {
	struct TArray<struct UExcelWorksheet*> mSheets; // 0x30(0x10)
	struct UExcelWorksheet* mActiveSheet; // 0x40(0x08)
	char pad_2CFF6948[0x128]; // 0x2cff6948(0x128)

	struct FString Title(); // Function XlntLib.ExcelWorkbook.Title // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x158a5c0
	bool StopWatch(struct UObject* WorldContextObject); // Function XlntLib.ExcelWorkbook.StopWatch // (Final|Native|Public|BlueprintCallable) // @ game+0x1589d30
	bool StartWatch(struct UObject* WorldContextObject, struct FDelegate onChanged, bool autoReload, float Rate); // Function XlntLib.ExcelWorkbook.StartWatch // (Final|Native|Public|BlueprintCallable) // @ game+0x1589ba0
	struct UExcelWorksheet* SheetWithTitle(struct FString Title); // Function XlntLib.ExcelWorkbook.SheetWithTitle // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x1589aa0
	struct UExcelWorksheet* SheetWithId(int32_t ID); // Function XlntLib.ExcelWorkbook.SheetWithId // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x1589a10
	struct TArray<struct FString> SheetTitles(); // Function XlntLib.ExcelWorkbook.SheetTitles // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1589990
	int32_t SheetCount(); // Function XlntLib.ExcelWorkbook.SheetCount // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1589960
	struct UExcelWorksheet* SheetAt(int32_t Index); // Function XlntLib.ExcelWorkbook.SheetAt // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x15898d0
	void SetTitle(struct FString Value); // Function XlntLib.ExcelWorkbook.SetTitle // (Final|Native|Public|BlueprintCallable) // @ game+0x15896f0
	void SetExtendedPropertyValue(enum class ExcelExtendedProperty Property, struct FExcelVariant Value); // Function XlntLib.ExcelWorkbook.SetExtendedPropertyValue // (Final|Native|Public|BlueprintCallable) // @ game+0x1588e60
	void SetCustomProperty(struct FString Name, struct FExcelVariant Value); // Function XlntLib.ExcelWorkbook.SetCustomProperty // (Final|Native|Public|BlueprintCallable) // @ game+0x1588a50
	void SetCorePropertyValue(enum class ExcelCoreProperty Property, struct FExcelVariant Value); // Function XlntLib.ExcelWorkbook.SetCorePropertyValue // (Final|Native|Public|BlueprintCallable) // @ game+0x1588880
	void SetBaseDate(enum class ExcelBaseDate BaseDate); // Function XlntLib.ExcelWorkbook.SetBaseDate // (Final|Native|Public|BlueprintCallable) // @ game+0x15885f0
	void SetActiveSheetWithTitle(struct FString Title); // Function XlntLib.ExcelWorkbook.SetActiveSheetWithTitle // (Final|Native|Public|BlueprintCallable) // @ game+0x1588500
	void SetActiveSheetAt(int32_t Index); // Function XlntLib.ExcelWorkbook.SetActiveSheetAt // (Final|Native|Public|BlueprintCallable) // @ game+0x1588480
	void SetActiveSheet(struct UExcelWorksheet* sheet); // Function XlntLib.ExcelWorkbook.SetActiveSheet // (Final|Native|Public|BlueprintCallable) // @ game+0x1588400
	bool SaveAs(struct FString Path, bool isAbsolutePath, bool isSave); // Function XlntLib.ExcelWorkbook.SaveAs // (Final|Native|Public|BlueprintCallable) // @ game+0x1588280
	bool Save(); // Function XlntLib.ExcelWorkbook.Save // (Final|Native|Public|BlueprintCallable) // @ game+0x1588250
	void RemoveSheet(struct UExcelWorksheet* sheet); // Function XlntLib.ExcelWorkbook.RemoveSheet // (Final|Native|Public|BlueprintCallable) // @ game+0x1588140
	bool Reload(); // Function XlntLib.ExcelWorkbook.Reload // (Final|Native|Public|BlueprintCallable) // @ game+0x1588110
	bool Load(struct FString fullPath); // Function XlntLib.ExcelWorkbook.Load // (Final|Native|Public|BlueprintCallable) // @ game+0x1587820
	bool HasTitle(); // Function XlntLib.ExcelWorkbook.HasTitle // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1586ef0
	bool HasExtendedProperty(enum class ExcelExtendedProperty Property); // Function XlntLib.ExcelWorkbook.HasExtendedProperty // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1586e60
	bool HasCustomProperty(struct FString Name); // Function XlntLib.ExcelWorkbook.HasCustomProperty // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1586d60
	bool HasCoreProperty(enum class ExcelCoreProperty Property); // Function XlntLib.ExcelWorkbook.HasCoreProperty // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1586cd0
	struct FExcelVariant GetExtendedPropertyValue(enum class ExcelExtendedProperty Property); // Function XlntLib.ExcelWorkbook.GetExtendedPropertyValue // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1586b50
	struct FExcelVariant GetCustomProperty(struct FString Name); // Function XlntLib.ExcelWorkbook.GetCustomProperty // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1586a20
	struct FExcelVariant GetCorePropertyValue(enum class ExcelCoreProperty Property); // Function XlntLib.ExcelWorkbook.GetCorePropertyValue // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1586960
	struct UExcelWorksheet* CreateSheet(int32_t Index, bool SetActive); // Function XlntLib.ExcelWorkbook.CreateSheet // (Final|Native|Public|BlueprintCallable) // @ game+0x1584970
	struct UExcelWorksheet* CopySheet(struct UExcelWorksheet* sheet, int32_t Index); // Function XlntLib.ExcelWorkbook.CopySheet // (Final|Native|Public|BlueprintCallable) // @ game+0x15848b0
	bool ContainsSheet(struct FString Title); // Function XlntLib.ExcelWorkbook.ContainsSheet // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x15847b0
	void Clear(); // Function XlntLib.ExcelWorkbook.Clear // (Final|Native|Public|BlueprintCallable) // @ game+0x1584480
	enum class ExcelBaseDate BaseDate(); // Function XlntLib.ExcelWorkbook.BaseDate // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1583620
	void ApplyToCells(struct UObject* WorldContextObject, struct FDelegate onCell); // Function XlntLib.ExcelWorkbook.ApplyToCells // (Final|Native|Public|BlueprintCallable) // @ game+0x1583530
	struct TArray<struct UExcelWorksheet*> AllSheets(); // Function XlntLib.ExcelWorkbook.AllSheets // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x15834a0
	struct TArray<enum class ExcelExtendedProperty> AllExtendedProperties(); // Function XlntLib.ExcelWorkbook.AllExtendedProperties // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x15833a0
	struct TArray<struct FString> AllCustomProperties(); // Function XlntLib.ExcelWorkbook.AllCustomProperties // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1583320
	struct TArray<enum class ExcelCoreProperty> AllCoreProperties(); // Function XlntLib.ExcelWorkbook.AllCoreProperties // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x15832a0
	struct UExcelWorksheet* ActiveSheet(); // Function XlntLib.ExcelWorkbook.ActiveSheet // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x1583270
};

// Class XlntLib.ExcelWorksheet
// Size: 0x2cff6a40 (Inherited: 0x2cff6930)
struct UExcelWorksheet : UObject {
	char pad_2CFF6930[0x110]; // 0x2cff6930(0x110)

	void UnmergeCells(struct FExcelCellRangeReference rangeReference); // Function XlntLib.ExcelWorksheet.UnmergeCells // (Final|Native|Public|BlueprintCallable) // @ game+0x158af40
	struct FString ToStringWithId(struct FString cellReferenceString); // Function XlntLib.ExcelWorksheet.ToStringWithId // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x158ae00
	struct FString ToString(struct FExcelCellReference cellReference); // Function XlntLib.ExcelWorksheet.ToString // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x158ad20
	int32_t ToIntWithId(struct FString cellReferenceString); // Function XlntLib.ExcelWorksheet.ToIntWithId // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x158ac20
	int32_t ToInt(struct FExcelCellReference cellReference); // Function XlntLib.ExcelWorksheet.ToInt // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x158ab90
	float ToFloatWithId(struct FString cellReferenceString); // Function XlntLib.ExcelWorksheet.ToFloatWithId // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x158aa90
	float ToFloat(struct FExcelCellReference cellReference); // Function XlntLib.ExcelWorksheet.ToFloat // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x158a9f0
	struct FDateTime ToDateTimeWithId(struct FString cellReferenceString); // Function XlntLib.ExcelWorksheet.ToDateTimeWithId // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x158a8f0
	struct FDateTime ToDateTime(struct FExcelCellReference cellReference); // Function XlntLib.ExcelWorksheet.ToDateTime // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x158a850
	bool ToBoolWithId(struct FString cellReferenceString); // Function XlntLib.ExcelWorksheet.ToBoolWithId // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x158a750
	bool ToBool(struct FExcelCellReference cellReference); // Function XlntLib.ExcelWorksheet.ToBool // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x158a6c0
	struct FString Title(); // Function XlntLib.ExcelWorksheet.Title // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x158a640
	struct TArray<struct FString> StringArrayAtRowSorted(int32_t rowIndex, struct TArray<int32_t>& outColumnIndices, enum class ExcelSortType SortType); // Function XlntLib.ExcelWorksheet.StringArrayAtRowSorted // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x158a430
	struct TArray<struct FString> StringArrayAtRow(int32_t rowIndex); // Function XlntLib.ExcelWorksheet.StringArrayAtRow // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x158a350
	struct TArray<struct FString> StringArrayAtColumnStringSorted(struct FString columnString, struct TArray<int32_t>& outRowIndices, enum class ExcelSortType SortType); // Function XlntLib.ExcelWorksheet.StringArrayAtColumnStringSorted // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x158a170
	struct TArray<struct FString> StringArrayAtColumnString(struct FString columnString); // Function XlntLib.ExcelWorksheet.StringArrayAtColumnString // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x158a030
	struct TArray<struct FString> StringArrayAtColumnSorted(int32_t columnIndex, struct TArray<int32_t>& outRowIndices, enum class ExcelSortType SortType); // Function XlntLib.ExcelWorksheet.StringArrayAtColumnSorted // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x1589ea0
	struct TArray<struct FString> StringArrayAtColumn(int32_t columnIndex); // Function XlntLib.ExcelWorksheet.StringArrayAtColumn // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1589dc0
	void SetTitle(struct FString Title); // Function XlntLib.ExcelWorksheet.SetTitle // (Final|Native|Public|BlueprintCallable) // @ game+0x15897e0
	void SetStringWithId(struct FString cellReferenceString, struct FString Value); // Function XlntLib.ExcelWorksheet.SetStringWithId // (Final|Native|Public|BlueprintCallable) // @ game+0x1589560
	void SetString(struct FExcelCellReference cellReference, struct FString Value); // Function XlntLib.ExcelWorksheet.SetString // (Final|Native|Public|BlueprintCallable) // @ game+0x1589430
	void SetIntWithId(struct FString cellReferenceString, int32_t Value); // Function XlntLib.ExcelWorksheet.SetIntWithId // (Final|Native|Public|BlueprintCallable) // @ game+0x1589300
	void SetInt(struct FExcelCellReference cellReference, int32_t Value); // Function XlntLib.ExcelWorksheet.SetInt // (Final|Native|Public|BlueprintCallable) // @ game+0x1589230
	void SetFloatWithId(struct FString cellReferenceString, float Value); // Function XlntLib.ExcelWorksheet.SetFloatWithId // (Final|Native|Public|BlueprintCallable) // @ game+0x1589100
	void SetFloat(struct FExcelCellReference cellReference, float Value); // Function XlntLib.ExcelWorksheet.SetFloat // (Final|Native|Public|BlueprintCallable) // @ game+0x1589030
	void SetDateTimeWithId(struct FString cellReferenceString, struct FDateTime Value); // Function XlntLib.ExcelWorksheet.SetDateTimeWithId // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x1588d40
	void SetDateTime(struct FExcelCellReference cellReference, struct FDateTime Value); // Function XlntLib.ExcelWorksheet.SetDateTime // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x1588c80
	void SetBoolWithId(struct FString cellReferenceString, bool Value); // Function XlntLib.ExcelWorksheet.SetBoolWithId // (Final|Native|Public|BlueprintCallable) // @ game+0x1588740
	void SetBool(struct FExcelCellReference cellReference, bool Value); // Function XlntLib.ExcelWorksheet.SetBool // (Final|Native|Public|BlueprintCallable) // @ game+0x1588670
	int32_t RowCount(bool skipNull); // Function XlntLib.ExcelWorksheet.RowCount // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x15881c0
	struct FString PrintRow(int32_t rowIndex, bool bPrintToScreen, struct FLinearColor TextColor, float Duration); // Function XlntLib.ExcelWorksheet.PrintRow // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x1587f50
	struct FString PrintColumnWithString(struct FString columnString, bool bPrintToScreen, struct FLinearColor TextColor, float Duration); // Function XlntLib.ExcelWorksheet.PrintColumnWithString // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x1587d50
	struct FString PrintColumn(int32_t columnIndex, bool bPrintToScreen, struct FLinearColor TextColor, float Duration); // Function XlntLib.ExcelWorksheet.PrintColumn // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x1587b90
	struct FString Print(bool bPrintToScreen, struct FLinearColor TextColor, float Duration); // Function XlntLib.ExcelWorksheet.Print // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x1587a10
	struct UExcelWorkbook* ParentWorkbook(); // Function XlntLib.ExcelWorksheet.ParentWorkbook // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1579320
	void MergeCells(struct FExcelCellRangeReference rangeReference); // Function XlntLib.ExcelWorksheet.MergeCells // (Final|Native|Public|BlueprintCallable) // @ game+0x1587980
	int32_t LowestRow(); // Function XlntLib.ExcelWorksheet.LowestRow // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1587950
	int32_t LowestColumn(); // Function XlntLib.ExcelWorksheet.LowestColumn // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1587920
	bool IsValid(); // Function XlntLib.ExcelWorksheet.IsValid // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x15877e0
	struct TArray<int32_t> IntArrayAtRowSorted(int32_t rowIndex, struct TArray<int32_t>& outColumnIndices, enum class ExcelSortType SortType); // Function XlntLib.ExcelWorksheet.IntArrayAtRowSorted // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x1587650
	struct TArray<int32_t> IntArrayAtRow(int32_t rowIndex); // Function XlntLib.ExcelWorksheet.IntArrayAtRow // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1587570
	struct TArray<int32_t> IntArrayAtColumnStringSorted(struct FString columnString, struct TArray<int32_t>& outRowIndices, enum class ExcelSortType SortType); // Function XlntLib.ExcelWorksheet.IntArrayAtColumnStringSorted // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x1587390
	struct TArray<int32_t> IntArrayAtColumnString(struct FString columnString); // Function XlntLib.ExcelWorksheet.IntArrayAtColumnString // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1587250
	struct TArray<int32_t> IntArrayAtColumnSorted(int32_t columnIndex, struct TArray<int32_t>& outRowIndices, enum class ExcelSortType SortType); // Function XlntLib.ExcelWorksheet.IntArrayAtColumnSorted // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x15870c0
	struct TArray<int32_t> IntArrayAtColumn(int32_t columnIndex); // Function XlntLib.ExcelWorksheet.IntArrayAtColumn // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1586fe0
	int32_t Index(); // Function XlntLib.ExcelWorksheet.Index // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1586fb0
	int32_t ID(); // Function XlntLib.ExcelWorksheet.ID // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1586f80
	int32_t HighestRow(); // Function XlntLib.ExcelWorksheet.HighestRow // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1586f50
	int32_t HighestColumn(); // Function XlntLib.ExcelWorksheet.HighestColumn // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1586f20
	bool HasCell(struct FExcelCellReference cellReference); // Function XlntLib.ExcelWorksheet.HasCell // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1586c40
	bool HasActiveCell(); // Function XlntLib.ExcelWorksheet.HasActiveCell // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1586c10
	struct TArray<float> FloatArrayAtRowSorted(int32_t rowIndex, struct TArray<int32_t>& outColumnIndices, enum class ExcelSortType SortType); // Function XlntLib.ExcelWorksheet.FloatArrayAtRowSorted // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x15867d0
	struct TArray<float> FloatArrayAtRow(int32_t rowIndex); // Function XlntLib.ExcelWorksheet.FloatArrayAtRow // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x15866f0
	struct TArray<float> FloatArrayAtColumnStringSorted(struct FString columnString, struct TArray<int32_t>& outRowIndices, enum class ExcelSortType SortType); // Function XlntLib.ExcelWorksheet.FloatArrayAtColumnStringSorted // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x1586510
	struct TArray<float> FloatArrayAtColumnString(struct FString columnString); // Function XlntLib.ExcelWorksheet.FloatArrayAtColumnString // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x15863d0
	struct TArray<float> FloatArrayAtColumnSorted(int32_t columnIndex, struct TArray<int32_t>& outRowIndices, enum class ExcelSortType SortType); // Function XlntLib.ExcelWorksheet.FloatArrayAtColumnSorted // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x1586240
	struct TArray<float> FloatArrayAtColumn(int32_t columnIndex); // Function XlntLib.ExcelWorksheet.FloatArrayAtColumn // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1586160
	struct UExcelCell* FindStringAtRow(int32_t rowIndex, struct FString searchValue); // Function XlntLib.ExcelWorksheet.FindStringAtRow // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1586020
	struct UExcelCell* FindStringAtColumnString(struct FString columnString, struct FString searchValue); // Function XlntLib.ExcelWorksheet.FindStringAtColumnString // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1585e90
	struct UExcelCell* FindStringAtColumn(int32_t columnIndex, struct FString searchValue); // Function XlntLib.ExcelWorksheet.FindStringAtColumn // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1585d50
	struct UExcelCell* FindIntAtRow(int32_t rowIndex, int32_t searchValue); // Function XlntLib.ExcelWorksheet.FindIntAtRow // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1585c90
	struct UExcelCell* FindIntAtColumnString(struct FString columnString, int32_t searchValue); // Function XlntLib.ExcelWorksheet.FindIntAtColumnString // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1585b50
	struct UExcelCell* FindIntAtColumn(int32_t columnIndex, int32_t searchValue); // Function XlntLib.ExcelWorksheet.FindIntAtColumn // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1585a90
	struct UExcelCell* FindFloatAtRow(int32_t rowIndex, float searchValue); // Function XlntLib.ExcelWorksheet.FindFloatAtRow // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x15859c0
	struct UExcelCell* FindFloatAtColumnString(struct FString columnString, float searchValue); // Function XlntLib.ExcelWorksheet.FindFloatAtColumnString // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1585880
	struct UExcelCell* FindFloatAtColumn(int32_t columnIndex, float searchValue); // Function XlntLib.ExcelWorksheet.FindFloatAtColumn // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x15857b0
	struct UExcelCell* FindDateTimeAtRow(int32_t rowIndex, struct FDateTime searchValue); // Function XlntLib.ExcelWorksheet.FindDateTimeAtRow // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x15856f0
	struct UExcelCell* FindDateTimeAtColumnString(struct FString columnString, struct FDateTime searchValue); // Function XlntLib.ExcelWorksheet.FindDateTimeAtColumnString // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x15855b0
	struct UExcelCell* FindDateTimeAtColumn(int32_t columnIndex, struct FDateTime searchValue); // Function XlntLib.ExcelWorksheet.FindDateTimeAtColumn // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x15854f0
	struct UExcelCell* FindBoolAtRow(int32_t rowIndex, bool searchValue); // Function XlntLib.ExcelWorksheet.FindBoolAtRow // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1585430
	struct UExcelCell* FindBoolAtColumnString(struct FString columnString, bool searchValue); // Function XlntLib.ExcelWorksheet.FindBoolAtColumnString // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x15852f0
	struct UExcelCell* FindBoolAtColumn(int32_t columnIndex, bool searchValue); // Function XlntLib.ExcelWorksheet.FindBoolAtColumn // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1585230
	struct TArray<struct FDateTime> DateTimeArrayAtRowSorted(int32_t rowIndex, struct TArray<int32_t>& outColumnIndices, enum class ExcelSortType SortType); // Function XlntLib.ExcelWorksheet.DateTimeArrayAtRowSorted // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x15850a0
	struct TArray<struct FDateTime> DateTimeArrayAtRow(int32_t rowIndex); // Function XlntLib.ExcelWorksheet.DateTimeArrayAtRow // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1584fc0
	struct TArray<struct FDateTime> DateTimeArrayAtColumnStringSorted(struct FString columnString, struct TArray<int32_t>& outRowIndices, enum class ExcelSortType SortType); // Function XlntLib.ExcelWorksheet.DateTimeArrayAtColumnStringSorted // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x1584de0
	struct TArray<struct FDateTime> DateTimeArrayAtColumnString(struct FString columnString); // Function XlntLib.ExcelWorksheet.DateTimeArrayAtColumnString // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1584ca0
	struct TArray<struct FDateTime> DateTimeArrayAtColumnSorted(int32_t columnIndex, struct TArray<int32_t>& outRowIndices, enum class ExcelSortType SortType); // Function XlntLib.ExcelWorksheet.DateTimeArrayAtColumnSorted // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x1584b10
	struct TArray<struct FDateTime> DateTimeArrayAtColumn(int32_t columnIndex); // Function XlntLib.ExcelWorksheet.DateTimeArrayAtColumn // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1584a30
	int32_t ColumnCount(bool skipNull); // Function XlntLib.ExcelWorksheet.ColumnCount // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1584720
	void ClearRow(int32_t rowIndex); // Function XlntLib.ExcelWorksheet.ClearRow // (Final|Native|Public|BlueprintCallable) // @ game+0x15846a0
	void ClearColumnWithString(struct FString columnString); // Function XlntLib.ExcelWorksheet.ClearColumnWithString // (Final|Native|Public|BlueprintCallable) // @ game+0x15845b0
	void ClearColumn(int32_t columnIndex); // Function XlntLib.ExcelWorksheet.ClearColumn // (Final|Native|Public|BlueprintCallable) // @ game+0x1584530
	void ClearCell(struct FExcelCellReference cellReference); // Function XlntLib.ExcelWorksheet.ClearCell // (Final|Native|Public|BlueprintCallable) // @ game+0x15844a0
	struct TArray<struct UExcelCell*> CellsAtRow(int32_t rowIndex, enum class ExcelSortType SortType); // Function XlntLib.ExcelWorksheet.CellsAtRow // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1584370
	struct TArray<struct UExcelCell*> CellsAtColumnString(struct FString columnString, enum class ExcelSortType SortType); // Function XlntLib.ExcelWorksheet.CellsAtColumnString // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1584200
	struct TArray<struct UExcelCell*> CellsAtColumn(int32_t columnIndex, enum class ExcelSortType SortType); // Function XlntLib.ExcelWorksheet.CellsAtColumn // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x15840f0
	struct UExcelCell* CellAtRef(struct FExcelCellReference cellReference); // Function XlntLib.ExcelWorksheet.CellAtRef // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1584050
	struct UExcelCell* CellAtId(struct FString cellString); // Function XlntLib.ExcelWorksheet.CellAtId // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1583f50
	struct UExcelCell* CellAt(int32_t Column, int32_t Row); // Function XlntLib.ExcelWorksheet.CellAt // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1583e90
	struct FExcelCellRangeReference CalculateDimension(); // Function XlntLib.ExcelWorksheet.CalculateDimension // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1583e50
	struct TArray<bool> BoolArrayAtRowSorted(int32_t rowIndex, struct TArray<int32_t>& outColumnIndices, enum class ExcelSortType SortType); // Function XlntLib.ExcelWorksheet.BoolArrayAtRowSorted // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x1583cc0
	struct TArray<bool> BoolArrayAtRow(int32_t rowIndex); // Function XlntLib.ExcelWorksheet.BoolArrayAtRow // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1583be0
	struct TArray<bool> BoolArrayAtColumnStringSorted(struct FString columnString, struct TArray<int32_t>& outRowIndices, enum class ExcelSortType SortType); // Function XlntLib.ExcelWorksheet.BoolArrayAtColumnStringSorted // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x1583a00
	struct TArray<bool> BoolArrayAtColumnString(struct FString columnString); // Function XlntLib.ExcelWorksheet.BoolArrayAtColumnString // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x15838c0
	struct TArray<bool> BoolArrayAtColumnSorted(int32_t columnIndex, struct TArray<int32_t>& outRowIndices, enum class ExcelSortType SortType); // Function XlntLib.ExcelWorksheet.BoolArrayAtColumnSorted // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x1583730
	struct TArray<bool> BoolArrayAtColumn(int32_t columnIndex); // Function XlntLib.ExcelWorksheet.BoolArrayAtColumn // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1583650
	struct TArray<struct FExcelCellRangeReference> AllMergedRanges(); // Function XlntLib.ExcelWorksheet.AllMergedRanges // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x1583420
	struct UExcelCell* ActiveCell(); // Function XlntLib.ExcelWorksheet.ActiveCell // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1583240
};

