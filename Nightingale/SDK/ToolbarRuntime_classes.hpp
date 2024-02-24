#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// Class ToolbarRuntime.ToolbarAccessInterface
class IToolbarAccessInterface : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IToolbarAccessInterface* GetDefaultObj();

	TScriptInterface<class IToolbarArrangementInterface> FindToolbarArrangement_BP(enum class EToolbarArrangement Arrangement);
};

// 0x0 (0x28 - 0x28)
// Class ToolbarRuntime.ToolbarArrangementInterface
class IToolbarArrangementInterface : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IToolbarArrangementInterface* GetDefaultObj();

	void UnbindAllDelegates(class UObject* Object);
	void ToggleSheathe();
	void SwapToolbarSlots(int32 SlotIndex, int32 OtherSlotIndex);
	void SelectToolbarSlotByIndex(int32 SlotIndex);
	void RemoveInventoryEntryFromToolbar(struct FGuid& InventoryEntryInstanceId);
	bool IsSlotEntryAtIndexEmpty(int32 Index);
	bool IsSelectedSlotEmpty();
	bool IsInventoryEntryInToolbar(struct FGuid& InventoryEntryInstanceId);
	int32 GetToolbarSize();
	TScriptInterface<class IToolbarSlotEntryObjectInterface> GetSlotEntryObjectAtIndex(int32 Index);
	int32 GetSelectedSlotIndex();
	TScriptInterface<class IToolbarSlotEntryObjectInterface> GetSelectedSlotEntryObject();
	struct FGameplayTag GetGameplayTagForLoadoutSlot();
	int32 FindSlotIndexForNewSlotEntry();
	void DeactivateSelectedSlot();
	void ClearToolbarSlot(int32 SlotIndex);
	void ClearAllToolbarSlots();
	bool CanAssignInventoryEntry(struct FGuid& InventoryEntryInstanceId);
	void BindDelegate_OnToolbarSlotEntryChanged(FDelegateProperty_& Delegate);
	void BindDelegate_OnToolbarArrangementChanged(FDelegateProperty_& Delegate);
	void BindDelegate_OnSelectedSlotIndexChanged(FDelegateProperty_& Delegate);
	void AssignInventoryEntryToToolbarSlot(int32 SlotIndex, struct FGuid& InventoryEntryInstanceId);
	void ActivateSelectedSlot();
};

// 0x70 (0x168 - 0xF8)
// Class ToolbarRuntime.ToolbarComponent
class UToolbarComponent : public UPersistentDataComponent
{
public:
	uint8                                        Pad_1E3[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UTexture2D*                            EmptySlotTexture;                                  // 0x100(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoClear, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UToolbarSlotEntryBase>     InventoryEntrySlotEntryClass;                      // 0x108(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoClear, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EToolbarArrangement               ToolbarArrangement;                                // 0x110(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, NoClear, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1E4[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnToolbarArrangementChanged;                       // 0x118(0x10)(ZeroConstructor, Transient, InstancedReference, NativeAccessSpecifierPrivate)
	FMulticastInlineDelegateProperty_            OnSelectedSlotIndexChanged;                        // 0x128(0x10)(ZeroConstructor, Transient, InstancedReference, NativeAccessSpecifierPrivate)
	FMulticastInlineDelegateProperty_            OnSlotEntryChanged;                                // 0x138(0x10)(ZeroConstructor, Transient, InstancedReference, NativeAccessSpecifierPrivate)
	class UToolbarSlotEntryBase*                 SharedEmptySlotObject;                             // 0x148(0x8)(Net, ZeroConstructor, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<class UToolbarSlotEntryBase*>         ToolbarEntries;                                    // 0x150(0x10)(Net, ZeroConstructor, Transient, RepNotify, NativeAccessSpecifierPrivate)
	int32                                        SelectedSlotIndex;                                 // 0x160(0x4)(Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1E5[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UToolbarComponent* GetDefaultObj();

	void ToolbarSlotEntryChangedMulticastDelegate__DelegateSignature(int32 SlotIndex);
	void ToolbarSelectedSlotIndexChangedMulticastDelegate__DelegateSignature(int32 OldSelectedIndex, int32 NewSelectedIndex);
	void ToolbarArrangementChangedMulticastDelegate__DelegateSignature();
	void ReplaceEntryAtIndex(int32 SlotIndex, class UToolbarSlotEntryBase* NewEntry);
	void OnRep_ToolbarEntryObjects(TArray<class UToolbarSlotEntryBase*>& OldToolbarEntryObjects);
	void OnRep_SelectedSlotIndex(int32 OldSlotIndex);
	void OnPossessedPawnChanged(class APawn* OldPawn, class APawn* NewPawn);
	class UToolbarSlotEntryBase* ConstructSlotEntry(TSubclassOf<class UToolbarSlotEntryBase> SlotEntryClass, int32 InitialSlotIndex);
	void Auth_SwapToolbarSlots(int32 SlotIndex, int32 OtherSlotIndex);
	void Auth_RemoveInventoryEntryFromToolbar(struct FGuid& InventoryEntryInstanceId);
	void Auth_ClearToolbarSlot(int32 SlotIndex);
	void Auth_ClearAllToolbarSlots();
	void Auth_AssignInventoryEntryToToolbarSlot(int32 SlotIndex, struct FGuid& InventoryEntryInstanceId);
};

// 0x0 (0x28 - 0x28)
// Class ToolbarRuntime.ToolbarInputInterface
class IToolbarInputInterface : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IToolbarInputInterface* GetDefaultObj();

	void Client_ToggleCurrentToolbarSlot(enum class EToolbarArrangement Arrangement);
	void Client_SelectToolbarSlotByIndex(enum class EToolbarArrangement Arrangement, int32 SlotIndex);
	void Client_SelectPreviousToolbarSlot(enum class EToolbarArrangement Arrangement);
	void Client_SelectNextToolbarSlot(enum class EToolbarArrangement Arrangement);
};

// 0x8 (0x30 - 0x28)
// Class ToolbarRuntime.ToolbarEntryStackCharacteristic
class UToolbarEntryStackCharacteristic : public UObject
{
public:
	int32                                        StackSize;                                         // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1EF[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UToolbarEntryStackCharacteristic* GetDefaultObj();

	bool UpdateStackSize(int32 NewStackSize);
	int32 GetStackSize();
};

// 0x10 (0x38 - 0x28)
// Class ToolbarRuntime.ToolbarEntryDurabilityCharacteristic
class UToolbarEntryDurabilityCharacteristic : public UObject
{
public:
	struct FItemInstanceDurabilityData           DurabilityData;                                    // 0x28(0x10)(NoDestructor, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UToolbarEntryDurabilityCharacteristic* GetDefaultObj();

	bool UpdateDurability(struct FItemInstanceDurabilityData& NewDurabilityData);
	struct FItemInstanceDurabilityData GetDurability();
};

// 0x8 (0x30 - 0x28)
// Class ToolbarRuntime.ToolbarEntryQualityCharacteristic
class UToolbarEntryQualityCharacteristic : public UObject
{
public:
	uint8                                        Pad_1F4[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UToolbarEntryQualityCharacteristic* GetDefaultObj();

	bool UpdateQuality(enum class EItemQuality NewQuality);
	enum class EItemQuality GetQuality();
};

// 0x18 (0x40 - 0x28)
// Class ToolbarRuntime.ToolbarSlotEntryBase
class UToolbarSlotEntryBase : public UObject
{
public:
	int32                                        SlotIndex;                                         // 0x28(0x4)(Net, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1FA[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerController*                     OwningControllerCache;                             // 0x30(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UToolbarComponent*                     OwningToolbarCache;                                // 0x38(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UToolbarSlotEntryBase* GetDefaultObj();

	bool HasAuthority();
	int32 GetSlotIndex();
	class APlayerController* GetOwningController();
};

// 0x0 (0x28 - 0x28)
// Class ToolbarRuntime.ToolbarSlotEntryObjectInterface
class IToolbarSlotEntryObjectInterface : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IToolbarSlotEntryObjectInterface* GetDefaultObj();

	void UnbindAllDelegates(class UObject* Object);
	class UUserWidget* GetTooltipWidget();
	class UToolbarEntryStackCharacteristic* GetStackCharacteristic();
	class UToolbarEntryQualityCharacteristic* GetQualityCharacteristic();
	class UTexture2D* GetIconTexture();
	class UToolbarEntryDurabilityCharacteristic* GetDurabilityCharacteristic();
	class UDragDropOperation* GetDragAndDropOperation();
	void BindDelegateTo_OnToolbarSlotEntryUpdated(FDelegateProperty_& Delegate);
};

// 0x0 (0x28 - 0x28)
// Class ToolbarRuntime.ToolbarSlotEntryWidgetInterface
class IToolbarSlotEntryWidgetInterface : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IToolbarSlotEntryWidgetInterface* GetDefaultObj();

	void SetSlotIndex(int32 SlotIndex);
	void SetSlotEntry(TScriptInterface<class IToolbarSlotEntryObjectInterface>& SlotEntryObject);
};

// 0x10 (0x50 - 0x40)
// Class ToolbarRuntime.ToolbarSlotEntry_EmptySlot
class UToolbarSlotEntry_EmptySlot : public UToolbarSlotEntryBase
{
public:
	uint8                                        Pad_202[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UTexture2D*                            EmptySlotTexture;                                  // 0x48(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UToolbarSlotEntry_EmptySlot* GetDefaultObj();

};

}


