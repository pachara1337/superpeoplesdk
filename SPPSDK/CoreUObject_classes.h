// Class CoreUObject.Object
// Size: 0x2cff6930 (Inherited: 0x00)
struct UObject {
	char pad_0[0x2cff6930]; // 0x00(0x2cff6930)

	void ExecuteUbergraph(int32_t EntryPoint); // Function CoreUObject.Object.ExecuteUbergraph // (Event|Public|BlueprintEvent) // @ game+0x2bad3b0
};

// Class CoreUObject.Interface
// Size: 0x2cff6a30 (Inherited: 0x2cff6930)
struct UInterface : UObject {
	char pad_2CFF6930[0x100]; // 0x2cff6930(0x100)
};

// Class CoreUObject.GCObjectReferencer
// Size: 0x2cff6a78 (Inherited: 0x2cff6930)
struct UGCObjectReferencer : UObject {
	char pad_2CFF6930[0x148]; // 0x2cff6930(0x148)
};

// Class CoreUObject.TextBuffer
// Size: 0x2cff6958 (Inherited: 0x2cff6930)
struct UTextBuffer : UObject {
	char pad_2CFF6930[0x28]; // 0x2cff6930(0x28)
};

// Class CoreUObject.Field
// Size: 0x2cff6c38 (Inherited: 0x2cff6930)
struct UField : UObject {
	char pad_2CFF6930[0x308]; // 0x2cff6930(0x308)
};

// Class CoreUObject.Struct
// Size: 0x2cff69d8 (Inherited: 0x2cff6c38)
struct UStruct : UField {
};

// Class CoreUObject.ScriptStruct
// Size: 0x2cff69e8 (Inherited: 0x2cff69d8)
struct UScriptStruct : UStruct {
	char pad_2CFF69D8[0x10]; // 0x2cff69d8(0x10)
};

// Class CoreUObject.Package
// Size: 0x2cffe9a0 (Inherited: 0x2cff6930)
struct UPackage : UObject {
	char pad_2CFF6930[0x8070]; // 0x2cff6930(0x8070)
};

// Class CoreUObject.Class
// Size: 0x2cff6a00 (Inherited: 0x2cff69d8)
struct UClass : UStruct {
	char pad_2CFF69D8[0x28]; // 0x2cff69d8(0x28)
};

// Class CoreUObject.Function
// Size: 0x2cff6a08 (Inherited: 0x2cff69d8)
struct UFunction : UStruct {
	char pad_2CFF69D8[0x30]; // 0x2cff69d8(0x30)
};

// Class CoreUObject.DelegateFunction
// Size: 0x2cff6a08 (Inherited: 0x2cff6a08)
struct UDelegateFunction : UFunction {
};

// Class CoreUObject.SparseDelegateFunction
// Size: 0x2cff6a20 (Inherited: 0x2cff6a08)
struct USparseDelegateFunction : UDelegateFunction {
	char pad_2CFF6A08[0x18]; // 0x2cff6a08(0x18)
};

// Class CoreUObject.DynamicClass
// Size: 0x2cffe980 (Inherited: 0x2cff6a00)
struct UDynamicClass : UClass {
	char pad_2CFF6A00[0x7f80]; // 0x2cff6a00(0x7f80)
};

// Class CoreUObject.PackageMap
// Size: 0x2cff6ce8 (Inherited: 0x2cff6930)
struct UPackageMap : UObject {
	char pad_2CFF6930[0x3b8]; // 0x2cff6930(0x3b8)
};

// Class CoreUObject.Enum
// Size: 0x2cff6968 (Inherited: 0x2cff6c38)
struct UEnum : UField {
};

// Class CoreUObject.LinkerPlaceholderClass
// Size: 0x2cffe9b8 (Inherited: 0x2cff6a00)
struct ULinkerPlaceholderClass : UClass {
	char pad_2CFF6A00[0x7fb8]; // 0x2cff6a00(0x7fb8)
};

// Class CoreUObject.LinkerPlaceholderExportObject
// Size: 0x2cff69f8 (Inherited: 0x2cff6930)
struct ULinkerPlaceholderExportObject : UObject {
	char pad_2CFF6930[0xc8]; // 0x2cff6930(0xc8)
};

// Class CoreUObject.LinkerPlaceholderFunction
// Size: 0x2cff69c0 (Inherited: 0x2cff6a08)
struct ULinkerPlaceholderFunction : UFunction {
};

// Class CoreUObject.MetaData
// Size: 0x2cff69d0 (Inherited: 0x2cff6930)
struct UMetaData : UObject {
	char pad_2CFF6930[0xa0]; // 0x2cff6930(0xa0)
};

// Class CoreUObject.ObjectRedirector
// Size: 0x2cff6938 (Inherited: 0x2cff6930)
struct UObjectRedirector : UObject {
	char pad_2CFF6930[0x8]; // 0x2cff6930(0x08)
};

// Class CoreUObject.Property
// Size: 0x2cff6980 (Inherited: 0x2cff6c38)
struct UProperty : UField {
};

// Class CoreUObject.EnumProperty
// Size: 0x2cff6990 (Inherited: 0x2cff6980)
struct UEnumProperty : UProperty {
	char pad_2CFF6980[0x10]; // 0x2cff6980(0x10)
};

// Class CoreUObject.ArrayProperty
// Size: 0x2cff6988 (Inherited: 0x2cff6980)
struct UArrayProperty : UProperty {
	char pad_2CFF6980[0x8]; // 0x2cff6980(0x08)
};

// Class CoreUObject.ObjectPropertyBase
// Size: 0x2cff6988 (Inherited: 0x2cff6980)
struct UObjectPropertyBase : UProperty {
	char pad_2CFF6980[0x8]; // 0x2cff6980(0x08)
};

// Class CoreUObject.BoolProperty
// Size: 0x2cff6988 (Inherited: 0x2cff6980)
struct UBoolProperty : UProperty {
	char pad_2CFF6980[0x8]; // 0x2cff6980(0x08)
};

// Class CoreUObject.NumericProperty
// Size: 0x2cffe980 (Inherited: 0x2cff6980)
struct UNumericProperty : UProperty {
	char pad_2CFF6980[0x8000]; // 0x2cff6980(0x8000)
};

// Class CoreUObject.ByteProperty
// Size: 0x2cff6988 (Inherited: 0x2cffe980)
struct UByteProperty : UNumericProperty {
};

// Class CoreUObject.ObjectProperty
// Size: 0x2cff6988 (Inherited: 0x2cff6988)
struct UObjectProperty : UObjectPropertyBase {
};

// Class CoreUObject.ClassProperty
// Size: 0x2cff6990 (Inherited: 0x2cff6988)
struct UClassProperty : UObjectProperty {
	char pad_2CFF6988[0x8]; // 0x2cff6988(0x08)
};

// Class CoreUObject.DelegateProperty
// Size: 0x2cff6988 (Inherited: 0x2cff6980)
struct UDelegateProperty : UProperty {
	char pad_2CFF6980[0x8]; // 0x2cff6980(0x08)
};

// Class CoreUObject.DoubleProperty
// Size: 0x2cff6980 (Inherited: 0x2cffe980)
struct UDoubleProperty : UNumericProperty {
};

// Class CoreUObject.FloatProperty
// Size: 0x2cff6980 (Inherited: 0x2cffe980)
struct UFloatProperty : UNumericProperty {
};

// Class CoreUObject.IntProperty
// Size: 0x2cff6980 (Inherited: 0x2cffe980)
struct UIntProperty : UNumericProperty {
};

// Class CoreUObject.Int8Property
// Size: 0x2cff6980 (Inherited: 0x2cffe980)
struct UInt8Property : UNumericProperty {
};

// Class CoreUObject.Int16Property
// Size: 0x2cff6980 (Inherited: 0x2cffe980)
struct UInt16Property : UNumericProperty {
};

// Class CoreUObject.Int64Property
// Size: 0x2cff6980 (Inherited: 0x2cffe980)
struct UInt64Property : UNumericProperty {
};

// Class CoreUObject.InterfaceProperty
// Size: 0x2cff6988 (Inherited: 0x2cff6980)
struct UInterfaceProperty : UProperty {
	char pad_2CFF6980[0x8]; // 0x2cff6980(0x08)
};

// Class CoreUObject.LazyObjectProperty
// Size: 0x2cff6988 (Inherited: 0x2cff6988)
struct ULazyObjectProperty : UObjectPropertyBase {
};

// Class CoreUObject.MapProperty
// Size: 0x2cff69a8 (Inherited: 0x2cff6980)
struct UMapProperty : UProperty {
	char pad_2CFF6980[0x28]; // 0x2cff6980(0x28)
};

// Class CoreUObject.MulticastDelegateProperty
// Size: 0x2cff6988 (Inherited: 0x2cff6980)
struct UMulticastDelegateProperty : UProperty {
	char pad_2CFF6980[0x8]; // 0x2cff6980(0x08)
};

// Class CoreUObject.MulticastInlineDelegateProperty
// Size: 0x2cff6988 (Inherited: 0x2cff6988)
struct UMulticastInlineDelegateProperty : UMulticastDelegateProperty {
};

// Class CoreUObject.MulticastSparseDelegateProperty
// Size: 0x2cff6988 (Inherited: 0x2cff6988)
struct UMulticastSparseDelegateProperty : UMulticastDelegateProperty {
};

// Class CoreUObject.NameProperty
// Size: 0x2cff6980 (Inherited: 0x2cff6980)
struct UNameProperty : UProperty {
};

// Class CoreUObject.SetProperty
// Size: 0x2cff69a0 (Inherited: 0x2cff6980)
struct USetProperty : UProperty {
	char pad_2CFF6980[0x20]; // 0x2cff6980(0x20)
};

// Class CoreUObject.SoftObjectProperty
// Size: 0x2cff6988 (Inherited: 0x2cff6988)
struct USoftObjectProperty : UObjectPropertyBase {
};

// Class CoreUObject.SoftClassProperty
// Size: 0x2cff6990 (Inherited: 0x2cff6988)
struct USoftClassProperty : USoftObjectProperty {
	char pad_2CFF6988[0x8]; // 0x2cff6988(0x08)
};

// Class CoreUObject.StrProperty
// Size: 0x2cff6980 (Inherited: 0x2cff6980)
struct UStrProperty : UProperty {
};

// Class CoreUObject.StructProperty
// Size: 0x2cff6988 (Inherited: 0x2cff6980)
struct UStructProperty : UProperty {
	char pad_2CFF6980[0x8]; // 0x2cff6980(0x08)
};

// Class CoreUObject.UInt16Property
// Size: 0x2cff6980 (Inherited: 0x2cffe980)
struct UUInt16Property : UNumericProperty {
};

// Class CoreUObject.UInt32Property
// Size: 0x2cff6980 (Inherited: 0x2cffe980)
struct UUInt32Property : UNumericProperty {
};

// Class CoreUObject.UInt64Property
// Size: 0x2cff6980 (Inherited: 0x2cffe980)
struct UUInt64Property : UNumericProperty {
};

// Class CoreUObject.WeakObjectProperty
// Size: 0x2cff6988 (Inherited: 0x2cff6988)
struct UWeakObjectProperty : UObjectPropertyBase {
};

// Class CoreUObject.TextProperty
// Size: 0x2cff6980 (Inherited: 0x2cff6980)
struct UTextProperty : UProperty {
};

// Class CoreUObject.PropertyWrapper
// Size: 0x2cff6938 (Inherited: 0x2cff6930)
struct UPropertyWrapper : UObject {
	char pad_2CFF6930[0x8]; // 0x2cff6930(0x08)
};

// Class CoreUObject.MulticastDelegatePropertyWrapper
// Size: 0x2cff6938 (Inherited: 0x2cff6938)
struct UMulticastDelegatePropertyWrapper : UPropertyWrapper {
};

// Class CoreUObject.MulticastInlineDelegatePropertyWrapper
// Size: 0x2cff6938 (Inherited: 0x2cff6938)
struct UMulticastInlineDelegatePropertyWrapper : UMulticastDelegatePropertyWrapper {
};

// Class CoreUObject.Default__Class
// Size: 0x2cff6b00 (Inherited: 0x00)
struct Default__Class {
	char pad_0[0x2cff6b00]; // 0x00(0x2cff6b00)
};

// DynamicClass CoreUObject.Default__DynamicClass
// Size: 0x2cff6a00 (Inherited: 0x00)
struct Default__DynamicClass {
	char pad_0[0x2cff6a00]; // 0x00(0x2cff6a00)
};

// LinkerPlaceholderClass CoreUObject.Default__LinkerPlaceholderClass
// Size: 0x2cff6a00 (Inherited: 0x00)
struct Default__LinkerPlaceholderClass {
	char pad_0[0x2cff6a00]; // 0x00(0x2cff6a00)
};

