// WidgetBlueprintGeneratedClass UW-Inventory_WeaponAttachmentSlot.UW-Inventory_WeaponAttachmentSlot_C
// Size: 0x2cff6b18 (Inherited: 0x2cff6aaa)
struct UUW-Inventory_WeaponAttachmentSlot_C : UUW-Inventory_SlotBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x14b0(0x08)
	struct UImage* Bg; // 0x14b8(0x08)
	struct UImage* BGImage; // 0x14c0(0x08)
	struct UImage* BorderImage; // 0x14c8(0x08)
	struct UImage* EmptyImage; // 0x14d0(0x08)
	struct UImage* ItemImage; // 0x14d8(0x08)
	struct UImage* OverImage; // 0x14e0(0x08)
	struct USizeBox* SizeBox; // 0x14e8(0x08)
	enum class EWeaponAttachmentType WeaponAttachmentType; // 0x14f0(0x01)
	int32_t WeaponSlotIndex; // 0x14f4(0x04)
	bool IsHover; // 0x14f8(0x01)
	struct UUW-Inventory_WeaponSlot_C* WeaponSlotWidget; // 0x1500(0x08)
	enum class EWeaponAttachmentUseType WeaponAttachmentUseType; // 0x1508(0x01)
	int32_t SlotMode; // 0x150c(0x04)
	struct UUW-Inventory_ItemSlotHover_C* HoverWidget; // 0x1510(0x08)
	char pad_2CFF6B05[0x13]; // 0x2cff6b05(0x13)

	void SetHoverWidgetRef(); // Function UW-Inventory_WeaponAttachmentSlot.UW-Inventory_WeaponAttachmentSlot_C.SetHoverWidgetRef // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SetWeaponSlot(struct UUW-Inventory_WeaponSlot_C* WeaponSlot); // Function UW-Inventory_WeaponAttachmentSlot.UW-Inventory_WeaponAttachmentSlot_C.SetWeaponSlot // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void OnDragDetected(struct FGeometry MyGeometry, struct FPointerEvent& PointerEvent, struct UDragDropOperation*& Operation); // Function UW-Inventory_WeaponAttachmentSlot.UW-Inventory_WeaponAttachmentSlot_C.OnDragDetected // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void IsDraging(bool& bResult); // Function UW-Inventory_WeaponAttachmentSlot.UW-Inventory_WeaponAttachmentSlot_C.IsDraging // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void OnRButtonClick(bool& bResult); // Function UW-Inventory_WeaponAttachmentSlot.UW-Inventory_WeaponAttachmentSlot_C.OnRButtonClick // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void UnEquip(); // Function UW-Inventory_WeaponAttachmentSlot.UW-Inventory_WeaponAttachmentSlot_C.UnEquip // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Reset(); // Function UW-Inventory_WeaponAttachmentSlot.UW-Inventory_WeaponAttachmentSlot_C.Reset // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Drop(); // Function UW-Inventory_WeaponAttachmentSlot.UW-Inventory_WeaponAttachmentSlot_C.Drop // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Init(enum class EWeaponAttachmentType AttachmentType, enum class EWeaponAttachmentUseType WeaponAttachmentUseType); // Function UW-Inventory_WeaponAttachmentSlot.UW-Inventory_WeaponAttachmentSlot_C.Init // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SetInfo(int32_t SlotIndex, struct UUW-InventoryWidget_C* InventoryWidget, struct UUW-Inventory_WeaponSlot_C* WeaponSlotWidget, struct FInventoryItemInfo InventoryItemInfo); // Function UW-Inventory_WeaponAttachmentSlot.UW-Inventory_WeaponAttachmentSlot_C.SetInfo // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void OnLoaded_024BD4794308D2A802E72686E4471A98(struct UObject* Loaded); // Function UW-Inventory_WeaponAttachmentSlot.UW-Inventory_WeaponAttachmentSlot_C.OnLoaded_024BD4794308D2A802E72686E4471A98 // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function UW-Inventory_WeaponAttachmentSlot.UW-Inventory_WeaponAttachmentSlot_C.OnMouseEnter // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x2bad3b0
	void OnMouseLeave(struct FPointerEvent& MouseEvent); // Function UW-Inventory_WeaponAttachmentSlot.UW-Inventory_WeaponAttachmentSlot_C.OnMouseLeave // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x2bad3b0
	void Hover(); // Function UW-Inventory_WeaponAttachmentSlot.UW-Inventory_WeaponAttachmentSlot_C.Hover // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void ResetEquip(); // Function UW-Inventory_WeaponAttachmentSlot.UW-Inventory_WeaponAttachmentSlot_C.ResetEquip // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Construct(); // Function UW-Inventory_WeaponAttachmentSlot.UW-Inventory_WeaponAttachmentSlot_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void CanEquip(); // Function UW-Inventory_WeaponAttachmentSlot.UW-Inventory_WeaponAttachmentSlot_C.CanEquip // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void ResetHover(); // Function UW-Inventory_WeaponAttachmentSlot.UW-Inventory_WeaponAttachmentSlot_C.ResetHover // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SelectEquip(); // Function UW-Inventory_WeaponAttachmentSlot.UW-Inventory_WeaponAttachmentSlot_C.SelectEquip // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void AsyncLoadIconTexture(struct TSoftObjectPtr<UPaperSprite> IconTexture); // Function UW-Inventory_WeaponAttachmentSlot.UW-Inventory_WeaponAttachmentSlot_C.AsyncLoadIconTexture // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void ResetSelectEquip(); // Function UW-Inventory_WeaponAttachmentSlot.UW-Inventory_WeaponAttachmentSlot_C.ResetSelectEquip // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void MouseLeave(); // Function UW-Inventory_WeaponAttachmentSlot.UW-Inventory_WeaponAttachmentSlot_C.MouseLeave // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void ExecuteUbergraph_UW-Inventory_WeaponAttachmentSlot(int32_t EntryPoint); // Function UW-Inventory_WeaponAttachmentSlot.UW-Inventory_WeaponAttachmentSlot_C.ExecuteUbergraph_UW-Inventory_WeaponAttachmentSlot // (Final|UbergraphFunction|HasDefaults) // @ game+0x2bad3b0
};

