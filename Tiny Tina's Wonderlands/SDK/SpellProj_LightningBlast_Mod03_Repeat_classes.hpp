#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x7B0 - 0x7A8)
// BlueprintGeneratedClass SpellProj_LightningBlast_Mod03_Repeat.SpellProj_LightningBlast_Mod03_Repeat_C
class ASpellProj_LightningBlast_Mod03_Repeat_C : public ASpellProj_LightningBlast_Mod03_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x7A8(0x8)(Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class ASpellProj_LightningBlast_Mod03_Repeat_C* GetDefaultObj();

	void UserConstructionScript();
	void ReceiveBeginPlay();
	void RepeatArcingTarget();
	void ExecuteUbergraph_SpellProj_LightningBlast_Mod03_Repeat(int32 EntryPoint, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable, class AActor* CallFunc_Array_Get_Item, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Array_Length_ReturnValue1, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_RandomIntegerInRange_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class AActor* CallFunc_Array_Get_Item1, bool CallFunc_SetupArcingBeams_BeamAttached);
};

}


