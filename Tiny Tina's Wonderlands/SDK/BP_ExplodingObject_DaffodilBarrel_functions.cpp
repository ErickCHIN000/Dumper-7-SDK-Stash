#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_ExplodingObject_DaffodilBarrel.BP_ExplodingObject_DaffodilBarrel_C
// (Actor)

class UClass* ABP_ExplodingObject_DaffodilBarrel_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ExplodingObject_DaffodilBarrel_C");

	return Clss;
}


// BP_ExplodingObject_DaffodilBarrel_C BP_ExplodingObject_DaffodilBarrel.Default__BP_ExplodingObject_DaffodilBarrel_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_ExplodingObject_DaffodilBarrel_C* ABP_ExplodingObject_DaffodilBarrel_C::GetDefaultObj()
{
	static class ABP_ExplodingObject_DaffodilBarrel_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_ExplodingObject_DaffodilBarrel_C*>(ABP_ExplodingObject_DaffodilBarrel_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_ExplodingObject_DaffodilBarrel.BP_ExplodingObject_DaffodilBarrel_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class Enum_ExplodingObjectDamageCallFunc_Get_DamageType_DamageType                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstance*           CallFunc_Map_Find_Value                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_ExplodingObject_DaffodilBarrel_C::UserConstructionScript(enum class Enum_ExplodingObjectDamage CallFunc_Get_DamageType_DamageType, class UMaterialInstance* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ExplodingObject_DaffodilBarrel_C", "UserConstructionScript");

	Params::ABP_ExplodingObject_DaffodilBarrel_C_UserConstructionScript_Params Parms{};

	Parms.CallFunc_Get_DamageType_DamageType = CallFunc_Get_DamageType_DamageType;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ExplodingObject_DaffodilBarrel.BP_ExplodingObject_DaffodilBarrel_C.Explode
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_ExplodingObject_DaffodilBarrel_C::Explode()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ExplodingObject_DaffodilBarrel_C", "Explode");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ExplodingObject_DaffodilBarrel.BP_ExplodingObject_DaffodilBarrel_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_ExplodingObject_DaffodilBarrel_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ExplodingObject_DaffodilBarrel_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ExplodingObject_DaffodilBarrel.BP_ExplodingObject_DaffodilBarrel_C.ExecuteUbergraph_BP_ExplodingObject_DaffodilBarrel
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_ExplodingObjectDamageCallFunc_Get_DamageType_DamageType                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMaterialInstance*           CallFunc_Map_Find_Value                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class UStaticMeshComponent*>K2Node_MakeArray_Array                                           (ZeroConstructor, ReferenceParm)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue                     (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UStaticMeshComponent*        CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_RandomRotator_ReturnValue                               (IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                  CallFunc_K2_SetRelativeRotation_SweepHitResult                   (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// float                              CallFunc_GetValueOfAttribute_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ExplodingObject_DaffodilBarrel_C::ExecuteUbergraph_BP_ExplodingObject_DaffodilBarrel(int32 EntryPoint, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, enum class Enum_ExplodingObjectDamage CallFunc_Get_DamageType_DamageType, bool CallFunc_NotEqual_ByteByte_ReturnValue, class UMaterialInstance* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, TArray<class UStaticMeshComponent*>& K2Node_MakeArray_Array, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, class UStaticMeshComponent* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, const struct FRotator& CallFunc_RandomRotator_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, const struct FHitResult& CallFunc_K2_SetRelativeRotation_SweepHitResult, float CallFunc_GetValueOfAttribute_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ExplodingObject_DaffodilBarrel_C", "ExecuteUbergraph_BP_ExplodingObject_DaffodilBarrel");

	Params::ABP_ExplodingObject_DaffodilBarrel_C_ExecuteUbergraph_BP_ExplodingObject_DaffodilBarrel_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Get_DamageType_DamageType = CallFunc_Get_DamageType_DamageType;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue = CallFunc_NotEqual_ByteByte_ReturnValue;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue = CallFunc_K2_GetComponentLocation_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_RandomRotator_ReturnValue = CallFunc_RandomRotator_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_K2_SetRelativeRotation_SweepHitResult = CallFunc_K2_SetRelativeRotation_SweepHitResult;
	Parms.CallFunc_GetValueOfAttribute_ReturnValue = CallFunc_GetValueOfAttribute_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


