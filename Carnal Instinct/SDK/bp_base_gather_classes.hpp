#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x39 (0x291 - 0x258)
// BlueprintGeneratedClass bp_base_gather.bp_base_gather_C
class Abp_base_gather_C : public ABP_BASE_INTERACTABLE_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x258(0x8)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	float                                        ReMinusGrow_Reset_Time;                            // 0x260(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2481[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UStaticMesh*                           Pickable_Mesh;                                     // 0x268(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UStaticMesh*                           Picked_Mesh;                                       // 0x270(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundCue*                             Sound_Cue;                                         // 0x278(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                Resource_Name;                                     // 0x280(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	bool                                         Can_Interact_;                                     // 0x290(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class Abp_base_gather_C* GetDefaultObj();

	void UserConstructionScript(class FText CallFunc_Conv_StringToText_ReturnValue);
	void Mesh_Resolve();
	void Game_Load();
	void Interaction();
	void Update();
	void ExecuteUbergraph_bp_base_gather(int32 EntryPoint, int32 Temp_int_Array_Index_Variable, bool K2Node_SwitchInteger_CmpSuccess, bool CallFunc_SetStaticMesh_ReturnValue, bool CallFunc_SetStaticMesh_ReturnValue_1, bool CallFunc_EqualEqual_IntInt_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, class UAC_Inventory_C* CallFunc_Get_AC_Inventory_AC_Inventory, int32 Temp_int_Loop_Counter_Variable, const struct FS_ItemData& CallFunc_Array_Get_Item, bool CallFunc_Add_Item_to_Inventory_Inventory_Full_, int32 CallFunc_Add_Item_to_Inventory_Added_Slot_Index, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue);
};

}


