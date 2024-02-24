#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x14 (0x404 - 0x3F0)
// BlueprintGeneratedClass ak_Component_Base_Character.ak_Component_Base_Character_C
class UAk_Component_Base_Character_C : public UAk_Component_Base_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x3F0(0x8)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	bool                                         Debug;                                             // 0x3F8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         Do_once;                                           // 0x3F9(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1979[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  LastState;                                         // 0x3FC(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UAk_Component_Base_Character_C* GetDefaultObj();

	void Set_New_Posture_State(class FName NewState, const class FString& CallFunc_Conv_NameToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Conv_NameToString_ReturnValue_1, bool CallFunc_EqualEqual_NameName_ReturnValue);
	void ReceiveTick(float DeltaSeconds);
	void ExecuteUbergraph_ak_Component_Base_Character(int32 EntryPoint, class FName Temp_name_Variable, class ACGAICharacter* K2Node_DynamicCast_AsCGAICharacter, bool K2Node_DynamicCast_bSuccess, enum class ELandMovementMode CallFunc_GetCurrentLandMovementMode_ReturnValue, class ACh_Hero_00_C* K2Node_DynamicCast_AsCh_Hero_00, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, float CallFunc_Subtract_FloatFloat_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, class FName Temp_name_Variable_1, bool Temp_bool_Variable, class FName Temp_name_Variable_2, class FName Temp_name_Variable_3, bool Temp_bool_Variable_1, class FName K2Node_Select_Default, float K2Node_Event_DeltaSeconds, bool CallFunc_IsValid_ReturnValue, class ACGCharacter* K2Node_DynamicCast_AsCGCharacter, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_IsCrouching_ReturnValue, float CallFunc_VSize_ReturnValue, bool K2Node_Select_Default_1, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, bool Temp_bool_Variable_2, class FName K2Node_Select_Default_2);
};

}


