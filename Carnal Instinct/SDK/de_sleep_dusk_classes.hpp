#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x280 - 0x278)
// BlueprintGeneratedClass de_sleep_dusk.de_sleep_dusk_C
class ADe_sleep_dusk_C : public AObject_dlg_event_child_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x278(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class ADe_sleep_dusk_C* GetDefaultObj();

	void Call_event(class Abp_dlg_actor_C* Dlg_actor, const struct FS_dlg_event_info& Event_data);
	void ExecuteUbergraph_de_sleep_dusk(int32 EntryPoint, class ABP_CombatCharacter_C* CallFunc_Get_Player_Reference_Player, float CallFunc_GetMaxValue_Value, class Abp_dlg_actor_C* K2Node_Event_dlg_actor, const struct FS_dlg_event_info& K2Node_Event_event_data, class AUltra_Dynamic_Sky_C* CallFunc_GetActorOfClass_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class UWB_Fade_C* CallFunc_Create_ReturnValue, bool CallFunc_IsValid_ReturnValue, class ABP_DungeonLighting_C* CallFunc_GetActorOfClass_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1);
};

}


