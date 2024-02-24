#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x50 - 0x38)
// BlueprintGeneratedClass BP_WidgetInventoryFilter_PlayerLoadout.BP_WidgetInventoryFilter_PlayerLoadout_C
class UBP_WidgetInventoryFilter_PlayerLoadout_C : public UWidgetInventoryEntryFilterStructureConstraints
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x38(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class ANWXPlayerController*                  PlayerController;                                  // 0x40(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UBP_LoadoutComponent_C*                LoadoutComponent;                                  // 0x48(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_WidgetInventoryFilter_PlayerLoadout_C* GetDefaultObj();

	void ShouldShowLoadoutEntry(const struct FInventoryEntry& Entry, bool* ShouldShow, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<struct FLoadoutSlot>& CallFunc_GetLoadoutSlots_LoadoutSlots, bool CallFunc_IsValid_ReturnValue, const struct FLoadoutSlot& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_EqualEqual_GuidGuid_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	bool ShouldShowEntry(struct FInventoryEntry& Entry, bool CallFunc_ShouldShowLoadoutEntry_shouldShow);
	void Initialize();
	void ExecuteUbergraph_BP_WidgetInventoryFilter_PlayerLoadout(int32 EntryPoint, class UBP_LoadoutComponent_C* CallFunc_GetComponentByClass_ReturnValue, class ANWXPlayerController* CallFunc_GetOwningPlayerController_ReturnValue, bool CallFunc_IsValid_ReturnValue);
};

}


