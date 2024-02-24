#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x230 - 0x228)
// BlueprintGeneratedClass Action_PS_ATL_Reload_01.Action_PS_ATL_Reload_01_C
class UAction_PS_ATL_Reload_01_C : public UAction_Weapon_Reload_Master_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x228(0x8)(Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UAction_PS_ATL_Reload_01_C* GetDefaultObj();

	void OnEnd(enum class EGbxActionEndState ActionEndState, class AActor* Actor);
	void ExecuteUbergraph_Action_PS_ATL_Reload_01(int32 EntryPoint, class AWeapon* CallFunc_K2_GetWeapon_ReturnValue, enum class EGbxActionEndState K2Node_Event_ActionEndState, class AActor* K2Node_Event_Actor);
};

}


