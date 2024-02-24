#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x468 - 0x458)
// BlueprintGeneratedClass GA_ClimbExitNormal.GA_ClimbExitNormal_C
class UGA_ClimbExitNormal_C : public UGA_ClimbExitBase_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x458(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class ABP_Character_C*                       MyCharacter;                                       // 0x460(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UGA_ClimbExitNormal_C* GetDefaultObj();

	void IsValidInDeathStates(bool* IsValid);
	void K2_ActivateAbility();
	void K2_OnEndAbility(bool bWasCancelled);
	void ExecuteUbergraph_GA_ClimbExitNormal(int32 EntryPoint, bool K2Node_Event_bWasCancelled);
};

}


