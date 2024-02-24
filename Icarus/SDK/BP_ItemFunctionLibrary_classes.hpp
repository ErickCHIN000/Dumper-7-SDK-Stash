#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass BP_ItemFunctionLibrary.BP_ItemFunctionLibrary_C
class UBP_ItemFunctionLibrary_C : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UBP_ItemFunctionLibrary_C* GetDefaultObj();

	void Get_Damage_Variation_Specific(class UObject* Context, const struct FItemData& Item, const struct FStatsEnum& Damage, const struct FStatsEnum& Variation, class UObject* __WorldContext, int32* Minimum, int32* Maximum, int32 CallFunc_GetStat_ReturnValue, int32 CallFunc_GetStat_ReturnValue_1, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Multiply_IntFloat_ReturnValue, int32 CallFunc_FTrunc_ReturnValue);
	void Get_Damage_Variation(const struct FItemData& Item, bool Melee, class UObject* __WorldContext, int32* Minimum, int32* Maximum, bool Temp_bool_Variable, const struct FStatsEnum& Temp_struct_Variable, const struct FStatsEnum& Temp_struct_Variable_1, bool Temp_bool_Variable_1, const struct FStatsEnum& K2Node_Select_Default, const struct FStatsEnum& Temp_struct_Variable_2, int32 CallFunc_GetStat_ReturnValue, const struct FStatsEnum& Temp_struct_Variable_3, const struct FStatsEnum& K2Node_Select_Default_1, int32 CallFunc_GetStat_ReturnValue_1, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Multiply_IntFloat_ReturnValue, int32 CallFunc_FTrunc_ReturnValue);
	void FillableSupports(class UFillableComponent* Target, class UFillableComponent* Source, class UObject* __WorldContext, bool* Supports, enum class EIcarusResourceType CallFunc_GetFillableType_ReturnValue, enum class EIcarusResourceType CallFunc_GetFillableType_ReturnValue_1, bool CallFunc_SetResourceType_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue);
	void FillableTypeToInt(uint8 Type, class UObject* __WorldContext, int32* Int, int32 CallFunc_Conv_ByteToInt_ReturnValue);
	void IntToFillableType(int32 Int, class UObject* __WorldContext, uint8* Type, uint8 CallFunc_Conv_IntToByte_ReturnValue);
};

}


