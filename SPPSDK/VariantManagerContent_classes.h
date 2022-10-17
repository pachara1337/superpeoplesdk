// Class VariantManagerContent.LevelVariantSets
// Size: 0x2cff6a98 (Inherited: 0x2cff6930)
struct ULevelVariantSets : UObject {
	struct UObject* DirectorClass; // 0x30(0x08)
	struct TArray<struct UVariantSet*> VariantSets; // 0x38(0x10)
	char pad_2CFF6948[0x150]; // 0x2cff6948(0x150)

	struct UVariantSet* GetVariantSetByName(struct FString VariantSetName); // Function VariantManagerContent.LevelVariantSets.GetVariantSetByName // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x1969940
	struct UVariantSet* GetVariantSet(int32_t VariantSetIndex); // Function VariantManagerContent.LevelVariantSets.GetVariantSet // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x19698b0
	int32_t GetNumVariantSets(); // Function VariantManagerContent.LevelVariantSets.GetNumVariantSets // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x1292150
};

// Class VariantManagerContent.LevelVariantSetsActor
// Size: 0x2cff6a28 (Inherited: 0x2cff6b08)
struct ALevelVariantSetsActor : AActor {
	struct FSoftObjectPath LevelVariantSets; // 0x308(0x20)

	bool SwitchOnVariantByName(struct FString VariantSetName, struct FString VariantName); // Function VariantManagerContent.LevelVariantSetsActor.SwitchOnVariantByName // (Final|Native|Public|BlueprintCallable) // @ game+0x1969d50
	bool SwitchOnVariantByIndex(int32_t VariantSetIndex, int32_t VariantIndex); // Function VariantManagerContent.LevelVariantSetsActor.SwitchOnVariantByIndex // (Final|Native|Public|BlueprintCallable) // @ game+0x1969c90
	void SetLevelVariantSets(struct ULevelVariantSets* InVariantSets); // Function VariantManagerContent.LevelVariantSetsActor.SetLevelVariantSets // (Final|Native|Public|BlueprintCallable) // @ game+0x1969bf0
	struct ULevelVariantSets* GetLevelVariantSets(bool bLoad); // Function VariantManagerContent.LevelVariantSetsActor.GetLevelVariantSets // (Final|Native|Public|BlueprintCallable) // @ game+0x19694d0
};

// Class VariantManagerContent.LevelVariantSetsFunctionDirector
// Size: 0x2cff6a48 (Inherited: 0x2cff6930)
struct ULevelVariantSetsFunctionDirector : UObject {
	char pad_2CFF6930[0x118]; // 0x2cff6930(0x118)
};

// Class VariantManagerContent.PropertyValue
// Size: 0x2cff6ad8 (Inherited: 0x2cff6930)
struct UPropertyValue : UObject {
	struct TArray<struct TFieldPath<FProperty>> Properties; // 0x90(0x10)
	struct TArray<int32_t> PropertyIndices; // 0xa0(0x10)
	struct TArray<struct FCapturedPropSegment> CapturedPropSegments; // 0xb0(0x10)
	struct FString FullDisplayString; // 0xc0(0x10)
	struct FName PropertySetterName; // 0xd0(0x0c)
	struct TMap<struct FString, struct FString> PropertySetterParameterDefaults; // 0xe0(0x50)
	bool bHasRecordedData; // 0x130(0x01)
	struct UObject* LeafPropertyClass; // 0x138(0x08)
	struct TArray<char> ValueBytes; // 0x148(0x10)
	enum class EPropertyValueCategory PropCategory; // 0x158(0x01)
	char pad_2CFF69E6[0xf2]; // 0x2cff69e6(0xf2)

	bool HasRecordedData(); // Function VariantManagerContent.PropertyValue.HasRecordedData // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1969a40
	struct FText GetPropertyTooltip(); // Function VariantManagerContent.PropertyValue.GetPropertyTooltip // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1969650
	struct FString GetFullDisplayString(); // Function VariantManagerContent.PropertyValue.GetFullDisplayString // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1969490
};

// Class VariantManagerContent.PropertyValueTransform
// Size: 0x2cff6ad8 (Inherited: 0x2cff6ad8)
struct UPropertyValueTransform : UPropertyValue {
};

// Class VariantManagerContent.PropertyValueVisibility
// Size: 0x2cff6ad8 (Inherited: 0x2cff6ad8)
struct UPropertyValueVisibility : UPropertyValue {
};

// Class VariantManagerContent.PropertyValueColor
// Size: 0x2cff6ad8 (Inherited: 0x2cff6ad8)
struct UPropertyValueColor : UPropertyValue {
};

// Class VariantManagerContent.PropertyValueMaterial
// Size: 0x2cff6ad8 (Inherited: 0x2cff6ad8)
struct UPropertyValueMaterial : UPropertyValue {
};

// Class VariantManagerContent.PropertyValueOption
// Size: 0x2cff6ad8 (Inherited: 0x2cff6ad8)
struct UPropertyValueOption : UPropertyValue {
};

// Class VariantManagerContent.PropertyValueSoftObject
// Size: 0x2cff6ad8 (Inherited: 0x2cff6ad8)
struct UPropertyValueSoftObject : UPropertyValue {
};

// Class VariantManagerContent.SwitchActor
// Size: 0x2cff6a30 (Inherited: 0x2cff6b08)
struct ASwitchActor : AActor {
	struct USceneComponent* SceneComponent; // 0x320(0x08)
	int32_t LastSelectedOption; // 0x328(0x04)

	void SelectOption(int32_t OptionIndex); // Function VariantManagerContent.SwitchActor.SelectOption // (Final|Native|Public|BlueprintCallable) // @ game+0x1969aa0
	int32_t GetSelectedOption(); // Function VariantManagerContent.SwitchActor.GetSelectedOption // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x19696f0
	struct TArray<struct AActor*> GetOptions(); // Function VariantManagerContent.SwitchActor.GetOptions // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x19695d0
};

// Class VariantManagerContent.Variant
// Size: 0x2cff6a78 (Inherited: 0x2cff6930)
struct UVariant : UObject {
	struct FText DisplayText; // 0x30(0x18)
	struct TArray<struct UVariantObjectBinding*> ObjectBindings; // 0x60(0x10)
	struct UTexture2D* Thumbnail; // 0x70(0x08)
	char pad_2CFF6960[0x118]; // 0x2cff6960(0x118)

	void SwitchOn(); // Function VariantManagerContent.Variant.SwitchOn // (Final|Native|Public|BlueprintCallable) // @ game+0x1969c70
	void SetDisplayText(struct FText& NewDisplayText); // Function VariantManagerContent.Variant.SetDisplayText // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x1969b20
	bool IsActive(); // Function VariantManagerContent.Variant.IsActive // (Final|Native|Public|BlueprintCallable) // @ game+0x1969a70
	struct UTexture2D* GetThumbnail(); // Function VariantManagerContent.Variant.GetThumbnail // (Final|Native|Public|BlueprintCallable) // @ game+0x1755df0
	int32_t GetNumActors(); // Function VariantManagerContent.Variant.GetNumActors // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x1969570
	struct FText GetDisplayText(); // Function VariantManagerContent.Variant.GetDisplayText // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x19693f0
	struct AActor* GetActor(int32_t ActorIndex); // Function VariantManagerContent.Variant.GetActor // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x1969360
};

// Class VariantManagerContent.VariantObjectBinding
// Size: 0x2cff6aa0 (Inherited: 0x2cff6930)
struct UVariantObjectBinding : UObject {
	struct FString CachedActorLabel; // 0x30(0x10)
	struct FSoftObjectPath ObjectPtr; // 0x40(0x20)
	LazyObjectProperty LazyObjectPtr; // 0x60(0x1c)
	struct TArray<struct UPropertyValue*> CapturedProperties; // 0x80(0x10)
	struct TArray<struct FFunctionCaller> FunctionCallers; // 0x90(0x10)
	char pad_2CFF699C[0x104]; // 0x2cff699c(0x104)
};

// Class VariantManagerContent.VariantSet
// Size: 0x2cff6a78 (Inherited: 0x2cff6930)
struct UVariantSet : UObject {
	struct FText DisplayText; // 0x30(0x18)
	bool bExpanded; // 0x60(0x01)
	struct TArray<struct UVariant*> Variants; // 0x68(0x10)
	char pad_2CFF6959[0x11f]; // 0x2cff6959(0x11f)

	void SetDisplayText(struct FText& NewDisplayText); // Function VariantManagerContent.VariantSet.SetDisplayText // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x1969b20
	struct UVariant* GetVariantByName(struct FString VariantName); // Function VariantManagerContent.VariantSet.GetVariantByName // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x19697b0
	struct UVariant* GetVariant(int32_t VariantIndex); // Function VariantManagerContent.VariantSet.GetVariant // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x1969720
	int32_t GetNumVariants(); // Function VariantManagerContent.VariantSet.GetNumVariants // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x19695a0
	struct FText GetDisplayText(); // Function VariantManagerContent.VariantSet.GetDisplayText // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x19693f0
};

