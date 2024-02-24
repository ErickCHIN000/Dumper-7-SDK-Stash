#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_ItemFunctionLibrary.BP_ItemFunctionLibrary_C
// (None)

class UClass* UBP_ItemFunctionLibrary_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ItemFunctionLibrary_C");

	return Clss;
}


// BP_ItemFunctionLibrary_C BP_ItemFunctionLibrary.Default__BP_ItemFunctionLibrary_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_ItemFunctionLibrary_C* UBP_ItemFunctionLibrary_C::GetDefaultObj()
{
	static class UBP_ItemFunctionLibrary_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_ItemFunctionLibrary_C*>(UBP_ItemFunctionLibrary_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_ItemFunctionLibrary.BP_ItemFunctionLibrary_C.Get Damage Variation Specific
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Context                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FItemData                   Item                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
// struct FStatsEnum                  Damage                                                           (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// struct FStatsEnum                  Variation                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Minimum                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Maximum                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetStat_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetStat_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_IntFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FTrunc_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ItemFunctionLibrary_C::Get_Damage_Variation_Specific(class UObject* Context, const struct FItemData& Item, const struct FStatsEnum& Damage, const struct FStatsEnum& Variation, class UObject* __WorldContext, int32* Minimum, int32* Maximum, int32 CallFunc_GetStat_ReturnValue, int32 CallFunc_GetStat_ReturnValue_1, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Multiply_IntFloat_ReturnValue, int32 CallFunc_FTrunc_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ItemFunctionLibrary_C", "Get Damage Variation Specific");

	Params::UBP_ItemFunctionLibrary_C_Get_Damage_Variation_Specific_Params Parms{};

	Parms.Context = Context;
	Parms.Item = Item;
	Parms.Damage = Damage;
	Parms.Variation = Variation;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_GetStat_ReturnValue = CallFunc_GetStat_ReturnValue;
	Parms.CallFunc_GetStat_ReturnValue_1 = CallFunc_GetStat_ReturnValue_1;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.CallFunc_Multiply_IntFloat_ReturnValue = CallFunc_Multiply_IntFloat_ReturnValue;
	Parms.CallFunc_FTrunc_ReturnValue = CallFunc_FTrunc_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Minimum != nullptr)
		*Minimum = Parms.Minimum;

	if (Maximum != nullptr)
		*Maximum = Parms.Maximum;

}


// Function BP_ItemFunctionLibrary.BP_ItemFunctionLibrary_C.Get Damage Variation
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FItemData                   Item                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
// bool                               Melee                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Minimum                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Maximum                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FStatsEnum                  Temp_struct_Variable                                             (HasGetValueTypeHash)
// struct FStatsEnum                  Temp_struct_Variable_1                                           (HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FStatsEnum                  K2Node_Select_Default                                            (HasGetValueTypeHash)
// struct FStatsEnum                  Temp_struct_Variable_2                                           (HasGetValueTypeHash)
// int32                              CallFunc_GetStat_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStatsEnum                  Temp_struct_Variable_3                                           (HasGetValueTypeHash)
// struct FStatsEnum                  K2Node_Select_Default_1                                          (HasGetValueTypeHash)
// int32                              CallFunc_GetStat_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_IntFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FTrunc_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ItemFunctionLibrary_C::Get_Damage_Variation(const struct FItemData& Item, bool Melee, class UObject* __WorldContext, int32* Minimum, int32* Maximum, bool Temp_bool_Variable, const struct FStatsEnum& Temp_struct_Variable, const struct FStatsEnum& Temp_struct_Variable_1, bool Temp_bool_Variable_1, const struct FStatsEnum& K2Node_Select_Default, const struct FStatsEnum& Temp_struct_Variable_2, int32 CallFunc_GetStat_ReturnValue, const struct FStatsEnum& Temp_struct_Variable_3, const struct FStatsEnum& K2Node_Select_Default_1, int32 CallFunc_GetStat_ReturnValue_1, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Multiply_IntFloat_ReturnValue, int32 CallFunc_FTrunc_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ItemFunctionLibrary_C", "Get Damage Variation");

	Params::UBP_ItemFunctionLibrary_C_Get_Damage_Variation_Params Parms{};

	Parms.Item = Item;
	Parms.Melee = Melee;
	Parms.__WorldContext = __WorldContext;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.Temp_struct_Variable_1 = Temp_struct_Variable_1;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.Temp_struct_Variable_2 = Temp_struct_Variable_2;
	Parms.CallFunc_GetStat_ReturnValue = CallFunc_GetStat_ReturnValue;
	Parms.Temp_struct_Variable_3 = Temp_struct_Variable_3;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_GetStat_ReturnValue_1 = CallFunc_GetStat_ReturnValue_1;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.CallFunc_Multiply_IntFloat_ReturnValue = CallFunc_Multiply_IntFloat_ReturnValue;
	Parms.CallFunc_FTrunc_ReturnValue = CallFunc_FTrunc_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Minimum != nullptr)
		*Minimum = Parms.Minimum;

	if (Maximum != nullptr)
		*Maximum = Parms.Maximum;

}


// Function BP_ItemFunctionLibrary.BP_ItemFunctionLibrary_C.FillableSupports
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UFillableComponent*          Target                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFillableComponent*          Source                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Supports                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EIcarusResourceType     CallFunc_GetFillableType_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EIcarusResourceType     CallFunc_GetFillableType_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetResourceType_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_ItemFunctionLibrary_C::FillableSupports(class UFillableComponent* Target, class UFillableComponent* Source, class UObject* __WorldContext, bool* Supports, enum class EIcarusResourceType CallFunc_GetFillableType_ReturnValue, enum class EIcarusResourceType CallFunc_GetFillableType_ReturnValue_1, bool CallFunc_SetResourceType_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ItemFunctionLibrary_C", "FillableSupports");

	Params::UBP_ItemFunctionLibrary_C_FillableSupports_Params Parms{};

	Parms.Target = Target;
	Parms.Source = Source;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_GetFillableType_ReturnValue = CallFunc_GetFillableType_ReturnValue;
	Parms.CallFunc_GetFillableType_ReturnValue_1 = CallFunc_GetFillableType_ReturnValue_1;
	Parms.CallFunc_SetResourceType_ReturnValue = CallFunc_SetResourceType_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Supports != nullptr)
		*Supports = Parms.Supports;

}


// Function BP_ItemFunctionLibrary.BP_ItemFunctionLibrary_C.FillableTypeToInt
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// uint8                              Type                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Int                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_ByteToInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ItemFunctionLibrary_C::FillableTypeToInt(uint8 Type, class UObject* __WorldContext, int32* Int, int32 CallFunc_Conv_ByteToInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ItemFunctionLibrary_C", "FillableTypeToInt");

	Params::UBP_ItemFunctionLibrary_C_FillableTypeToInt_Params Parms{};

	Parms.Type = Type;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_Conv_ByteToInt_ReturnValue = CallFunc_Conv_ByteToInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Int != nullptr)
		*Int = Parms.Int;

}


// Function BP_ItemFunctionLibrary.BP_ItemFunctionLibrary_C.IntToFillableType
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              Int                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              Type                                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_Conv_IntToByte_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ItemFunctionLibrary_C::IntToFillableType(int32 Int, class UObject* __WorldContext, uint8* Type, uint8 CallFunc_Conv_IntToByte_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ItemFunctionLibrary_C", "IntToFillableType");

	Params::UBP_ItemFunctionLibrary_C_IntToFillableType_Params Parms{};

	Parms.Int = Int;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_Conv_IntToByte_ReturnValue = CallFunc_Conv_IntToByte_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Type != nullptr)
		*Type = Parms.Type;

}

}


