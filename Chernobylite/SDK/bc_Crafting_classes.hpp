#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0xC0 - 0xB0)
// BlueprintGeneratedClass bc_Crafting.bc_Crafting_C
class Ubc_Crafting_C : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xB0(0x8)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UWid_pda_Crafting_C*                   Crafting;                                          // 0xB8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class Ubc_Crafting_C* GetDefaultObj();

	void FireUp();
	void End();
	void InputDPadUp();
	void InputDPadDown();
	void InputLeft();
	void InputRight();
	void InputDown();
	void InputUp();
	void InputFaceDown();
	void InputFaceDownRelease();
	void InputFaceRight();
	void InputDPadLeft();
	void InputDPadRight();
	void ExecuteUbergraph_bc_Crafting(int32 EntryPoint, bool Temp_bool_A7B6774E4FFD2DEC39C18BBAB251C8BC_Variable, bool Temp_bool_A7B6774E4FFD2DEC39C18BBAB251C8BC_Variable_1, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class UWid_pda_Crafting_C* CallFunc_Create_ReturnValue, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter, class ACGMovementState* CallFunc_SetNewMovementState_ReturnValue, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_1, class ACGMovementState* CallFunc_SetNewMovementState_ReturnValue_1);
};

}


