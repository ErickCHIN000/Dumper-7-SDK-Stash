#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x2C0 - 0x2A0)
// BlueprintGeneratedClass BP_LockPickObject.BP_LockPickObject_C
class ABP_LockPickObject_C : public ABP_MasterObject_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2A0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	enum class Enum_LockpickDifficulty           Difficulty;                                        // 0x2A8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsLocked_;                                         // 0x2A9(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_111[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<double>                               LockpickRange;                                     // 0x2B0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class ABP_LockPickObject_C* GetDefaultObj();

	void LockpickSuccessful();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_LockPickObject(int32 EntryPoint, double Temp_real_Variable, double Temp_real_Variable_1, double Temp_real_Variable_2, double CallFunc_RandomFloatInRange_ReturnValue, double CallFunc_Array_Get_Item, double Temp_real_Variable_3, enum class Enum_LockpickDifficulty Temp_byte_Variable, double CallFunc_Array_Get_Item_1, const class FString& CallFunc_Conv_DoubleToString_ReturnValue, double K2Node_Select_Default, const class FString& CallFunc_Concat_StrStr_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue, double CallFunc_Array_Get_Item_2, const class FString& CallFunc_Conv_DoubleToString_ReturnValue_1, int32 CallFunc_RandomIntegerInRange_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, uint8 CallFunc_Conv_IntToByte_ReturnValue, uint8 CallFunc_GetValidValue_ReturnValue);
};

}


