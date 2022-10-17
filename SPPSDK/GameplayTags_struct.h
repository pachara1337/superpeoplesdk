// Enum GameplayTags.EGameplayTagQueryExprType
enum class EGameplayTagQueryExprType : uint8 {
	Undefined = 0,
	AnyTagsMatch = 1,
	AllTagsMatch = 2,
	NoTagsMatch = 3,
	AnyExprMatch = 4,
	AllExprMatch = 5,
	NoExprMatch = 6,
	EGameplayTagQueryExprType_MAX = 7
};

// Enum GameplayTags.EGameplayContainerMatchType
enum class EGameplayContainerMatchType : uint8 {
	Any = 0,
	All = 1,
	EGameplayContainerMatchType_MAX = 2
};

// Enum GameplayTags.EGameplayTagMatchType
enum class EGameplayTagMatchType : uint8 {
	Explicit = 0,
	IncludeParentTags = 1,
	EGameplayTagMatchType_MAX = 2
};

// Enum GameplayTags.EGameplayTagSelectionType
enum class EGameplayTagSelectionType : uint8 {
	None = 0,
	NonRestrictedOnly = 1,
	RestrictedOnly = 2,
	All = 3,
	EGameplayTagSelectionType_MAX = 4
};

// Enum GameplayTags.EGameplayTagSourceType
enum class EGameplayTagSourceType : uint8 {
	Native = 0,
	DefaultTagList = 1,
	TagList = 2,
	RestrictedTagList = 3,
	DataTable = 4,
	Invalid = 5,
	EGameplayTagSourceType_MAX = 6
};

// ScriptStruct GameplayTags.GameplayTagQuery
// Size: 0x2cff6948 (Inherited: 0x00)
struct FGameplayTagQuery {
	int32_t TokenStreamVersion; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct TArray<struct FGameplayTag> TagDictionary; // 0x08(0x10)
	struct TArray<char> QueryTokenStream; // 0x18(0x10)
	struct FString UserDescription; // 0x28(0x10)
	struct FString AutoDescription; // 0x38(0x10)
	char pad_48[0x2cff6900]; // 0x48(0x2cff6900)
};

// ScriptStruct GameplayTags.GameplayTag
// Size: 0x2cff6a0c (Inherited: 0x00)
struct FGameplayTag {
	struct FName TagName; // 0x00(0x0c)
	char pad_C[0x2cff6a00]; // 0x0c(0x2cff6a00)
};

// ScriptStruct GameplayTags.GameplayTagCreationWidgetHelper
// Size: 0x2cff6d01 (Inherited: 0x00)
struct FGameplayTagCreationWidgetHelper {
	char pad_0[0x2cff6d01]; // 0x00(0x2cff6d01)
};

// ScriptStruct GameplayTags.GameplayTagReferenceHelper
// Size: 0x2cff6a10 (Inherited: 0x00)
struct FGameplayTagReferenceHelper {
	char pad_0[0x2cff6a10]; // 0x00(0x2cff6a10)
};

// ScriptStruct GameplayTags.GameplayTagContainer
// Size: 0x2cff6a20 (Inherited: 0x00)
struct FGameplayTagContainer {
	struct TArray<struct FGameplayTag> GameplayTags; // 0x00(0x10)
	struct TArray<struct FGameplayTag> ParentTags; // 0x10(0x10)
	char pad_20[0x2cff6a00]; // 0x20(0x2cff6a00)
};

// ScriptStruct GameplayTags.GameplayTagNode
// Size: 0x2cffe958 (Inherited: 0x00)
struct FGameplayTagNode {
	char pad_0[0x2cffe958]; // 0x00(0x2cffe958)
};

// ScriptStruct GameplayTags.GameplayTagSource
// Size: 0x2cff6a20 (Inherited: 0x00)
struct FGameplayTagSource {
	struct FName SourceName; // 0x00(0x0c)
	enum class EGameplayTagSourceType SourceType; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
	struct UGameplayTagsList* SourceTagList; // 0x10(0x08)
	struct URestrictedGameplayTagsList* SourceRestrictedTagList; // 0x18(0x08)
	char pad_20[0x2cff6a00]; // 0x20(0x2cff6a00)
};

// ScriptStruct GameplayTags.GameplayTagTableRow
// Size: 0x2cffd628 (Inherited: 0x2cff6b08)
struct FGameplayTagTableRow : FTableRowBase {
	struct FName Tag; // 0x08(0x0c)
	struct FString DevComment; // 0x18(0x10)
	char pad_2CFF6B24[0x6b04]; // 0x2cff6b24(0x6b04)
};

// ScriptStruct GameplayTags.RestrictedGameplayTagTableRow
// Size: 0x2cff6c30 (Inherited: 0x2cffd628)
struct FRestrictedGameplayTagTableRow : FGameplayTagTableRow {
	bool bAllowNonRestrictedChildren; // 0x28(0x01)
};

// ScriptStruct GameplayTags.RestrictedConfigInfo
// Size: 0x2cffea20 (Inherited: 0x00)
struct FRestrictedConfigInfo {
	struct FString RestrictedConfigName; // 0x00(0x10)
	struct TArray<struct FString> Owners; // 0x10(0x10)
	char pad_20[0x2cffea00]; // 0x20(0x2cffea00)
};

// ScriptStruct GameplayTags.GameplayTagCategoryRemap
// Size: 0x2cff6a20 (Inherited: 0x00)
struct FGameplayTagCategoryRemap {
	struct FString BaseCategory; // 0x00(0x10)
	struct TArray<struct FString> RemapCategories; // 0x10(0x10)
	char pad_20[0x2cff6a00]; // 0x20(0x2cff6a00)
};

// ScriptStruct GameplayTags.GameplayTagRedirect
// Size: 0x2cff6a18 (Inherited: 0x00)
struct FGameplayTagRedirect {
	struct FName OldTagName; // 0x00(0x0c)
	struct FName NewTagName; // 0x0c(0x0c)
	char pad_18[0x2cff6a00]; // 0x18(0x2cff6a00)
};

