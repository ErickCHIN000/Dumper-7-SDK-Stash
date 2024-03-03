#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x280 - 0x278)
// BlueprintGeneratedClass de_remove50GandUnaggro.de_remove50GandUnaggro_C
class ADe_remove50GandUnaggro_C : public AObject_dlg_event_child_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x278(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class ADe_remove50GandUnaggro_C* GetDefaultObj();

	void Call_event(class Abp_dlg_actor_C* Dlg_actor, const struct FS_dlg_event_info& Event_data);
	void ExecuteUbergraph_de_remove50GandUnaggro(int32 EntryPoint, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class Abp_dlg_actor_C* K2Node_Event_dlg_actor, const struct FS_dlg_event_info& K2Node_Event_event_data, class UAC_Inventory_C* CallFunc_Get_AC_Inventory_AC_Inventory, TArray<class ABP_AnubiteAIMinusGuard_C*>& CallFunc_GetAllActorsOfClass_OutActors, class ABP_AnubiteAIMinusGuard_C* CallFunc_Array_Get_Item, float CallFunc_Subtract_FloatFloat_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
};

}


