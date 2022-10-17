// Class HoudiniNiagara.HoudiniCSV
// Size: 0x2cff6ad8 (Inherited: 0x2cff6930)
struct UHoudiniCSV : UObject {
	struct FString Filename; // 0x30(0x10)
	int32_t NumberOfRows; // 0x40(0x04)
	int32_t NumberOfColumns; // 0x44(0x04)
	int32_t NumberOfPoints; // 0x48(0x04)
	struct FString SourceTitleRow; // 0x50(0x10)
	struct TArray<struct FString> ColumnTitleArray; // 0x60(0x10)
	struct TArray<float> FloatCSVData; // 0x70(0x10)
	struct TArray<float> SpawnTimes; // 0x80(0x10)
	struct TArray<float> LifeValues; // 0x90(0x10)
	struct TArray<int32_t> PointTypes; // 0xa0(0x10)
	struct TArray<int32_t> SpecialAttributesColumnIndexes; // 0xb0(0x10)
	struct TArray<struct FPointIndexes> PointValueIndexes; // 0xc0(0x10)
	bool UseCustomTitleRow; // 0xd0(0x01)
	char pad_2CFF69CD[0x10b]; // 0x2cff69cd(0x10b)

	bool GetVelocityValue(int32_t& rowIndex, struct FVector& Value); // Function HoudiniNiagara.HoudiniCSV.GetVelocityValue // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x15ad3c0
	bool GetVectorValue(int32_t& rowIndex, int32_t& colIndex, struct FVector& Value, bool& DoSwap, bool& DoScale); // Function HoudiniNiagara.HoudiniCSV.GetVectorValue // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x15ad1b0
	bool GetTimeValue(int32_t& rowIndex, float& Value); // Function HoudiniNiagara.HoudiniCSV.GetTimeValue // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x15ad0c0
	bool GetRowIndexesForPointAtTime(int32_t& POINTID, float& desiredTime, int32_t& PrevIndex, int32_t& NextIndex, float& PrevWeight); // Function HoudiniNiagara.HoudiniCSV.GetRowIndexesForPointAtTime // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x15aceb0
	bool GetPositionValue(int32_t& rowIndex, struct FVector& Value); // Function HoudiniNiagara.HoudiniCSV.GetPositionValue // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x15acdc0
	bool GetPointVectorValueAtTime(int32_t& POINTID, int32_t& columnIndex, float& desiredTime, struct FVector& Vector, bool& DoSwap, bool& DoScale); // Function HoudiniNiagara.HoudiniCSV.GetPointVectorValueAtTime // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x15acb60
	bool GetPointValueAtTime(int32_t& POINTID, int32_t& columnIndex, float& desiredTime, float& Value); // Function HoudiniNiagara.HoudiniCSV.GetPointValueAtTime // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x15ac9b0
	bool GetPointType(int32_t& POINTID, int32_t& Value); // Function HoudiniNiagara.HoudiniCSV.GetPointType // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x15ac8c0
	bool GetPointPositionAtTime(int32_t& POINTID, float& desiredTime, struct FVector& Vector); // Function HoudiniNiagara.HoudiniCSV.GetPointPositionAtTime // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x15ac780
	bool GetPointLifeAtTime(int32_t& POINTID, float& desiredTime, float& Value); // Function HoudiniNiagara.HoudiniCSV.GetPointLifeAtTime // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x15ac640
	bool GetPointLife(int32_t& POINTID, float& Value); // Function HoudiniNiagara.HoudiniCSV.GetPointLife // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x15ac550
	bool GetPointIDsToSpawnAtTime(float& desiredTime, int32_t& MinID, int32_t& MaxID, int32_t& Count, int32_t& LastSpawnedPointID, float& LastSpawnTime); // Function HoudiniNiagara.HoudiniCSV.GetPointIDsToSpawnAtTime // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x15ac320
	int32_t GetNumberOfRows(); // Function HoudiniNiagara.HoudiniCSV.GetNumberOfRows // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1292150
	int32_t GetNumberOfPoints(); // Function HoudiniNiagara.HoudiniCSV.GetNumberOfPoints // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x15ac2f0
	int32_t GetNumberOfColumns(); // Function HoudiniNiagara.HoudiniCSV.GetNumberOfColumns // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x15ac2c0
	bool GetNormalValue(int32_t& rowIndex, struct FVector& Value); // Function HoudiniNiagara.HoudiniCSV.GetNormalValue // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x15ac1d0
	bool GetLastRowIndexAtTime(float& desiredTime, int32_t& lastRowIndex); // Function HoudiniNiagara.HoudiniCSV.GetLastRowIndexAtTime // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x15ac0e0
	bool GetLastPointIDToSpawnAtTime(float& Time, int32_t& lastIndex); // Function HoudiniNiagara.HoudiniCSV.GetLastPointIDToSpawnAtTime // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x15abff0
	bool GetImpulseValue(int32_t& rowIndex, float& Value); // Function HoudiniNiagara.HoudiniCSV.GetImpulseValue // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x15abf00
	bool GetFloatValueForString(int32_t& rowIndex, struct FString ColumnTitle, float& Value); // Function HoudiniNiagara.HoudiniCSV.GetFloatValueForString // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x15abdb0
	bool GetFloatValue(int32_t& rowIndex, int32_t& colIndex, float& Value); // Function HoudiniNiagara.HoudiniCSV.GetFloatValue // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x15abc70
	bool GetColumnIndexFromString(struct FString ColumnTitle, int32_t& columnIndex); // Function HoudiniNiagara.HoudiniCSV.GetColumnIndexFromString // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x15abb70
	bool GetColorValue(int32_t& rowIndex, struct FLinearColor& Value); // Function HoudiniNiagara.HoudiniCSV.GetColorValue // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x15aba80
};

// Class HoudiniNiagara.NiagaraDataInterfaceHoudiniCSV
// Size: 0x2cff6a48 (Inherited: 0x2cff6a38)
struct UNiagaraDataInterfaceHoudiniCSV : UNiagaraDataInterface {
	struct UHoudiniCSV* HoudiniCSVAsset; // 0x38(0x08)
	int32_t LastSpawnedPointID; // 0x40(0x04)
	float LastSpawnTime; // 0x44(0x04)
};

