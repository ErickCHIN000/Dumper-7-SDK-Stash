#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x48 (0x100 - 0xB8)
// BlueprintGeneratedClass LevellingComponent.LevellingComponent_C
class ULevellingComponent_C : public UBaseComponent_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xB8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	int32                                        CurrentLevel;                                      // 0xC0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        LevelCap;                                          // 0xC4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CurrentXP;                                         // 0xC8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CurrentMaxXP;                                      // 0xD0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CurrentPercentage;                                 // 0xD8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       BufferXP;                                          // 0xE0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       RemainingXP;                                       // 0xE8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       MultiplyValue;                                     // 0xF0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Difficulty_MultiplierValue;                        // 0xF8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ULevellingComponent_C* GetDefaultObj();

	void ComponentsToSave(TArray<class UActorComponent*>* Components);
	void Reset();
	void XPDeath(bool CallFunc_Greater_IntInt_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, int32 Temp_int_Variable, int32 CallFunc_Round_ReturnValue, double CallFunc_Conv_IntToDouble_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue);
	void LevelUp(double RemainingXP, int32 Temp_int_Variable, class UTechTreeComponent_C* CallFunc_GetSkillTreeManager_TechTree, int64 CallFunc_Conv_IntToInt64_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, double CallFunc_AddXP_XPOutput, class FText CallFunc_Format_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue);
	void AddXP(double XP, bool LevelUp_, double* XPOutput, double CallFunc_SelectFloat_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue);
	void CalculateMaxXP(double CallFunc_Multiply_DoubleDouble_ReturnValue, int32 CallFunc_FCeil_ReturnValue, double CallFunc_Conv_IntToDouble_ReturnValue);
	void CalculatePercentage(double CallFunc_Divide_DoubleDouble_ReturnValue);
	void ActorLoaded();
	void ActorPreSave();
	void ActorSaved();
	void LoadComponent();
	void Event_levelBar();
	void Event_LevelBarTimer();
	void Event_XPDeath();
	void Event_Multiplier(float NewValue);
	void ExecuteUbergraph_LevellingComponent(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, int32 Temp_int_Variable, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue, double CallFunc_GetWorldDeltaSeconds_ReturnValue, double CallFunc_FInterpTo_ReturnValue, int32 CallFunc_FCeil_ReturnValue, double CallFunc_Conv_IntToDouble_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, float K2Node_CustomEvent_NewValue, double K2Node_VariableSet_Difficulty_MultiplierValue_ImplicitCast);
};

}


