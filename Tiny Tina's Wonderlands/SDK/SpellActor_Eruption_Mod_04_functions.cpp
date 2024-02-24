#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass SpellActor_Eruption_Mod_04.SpellActor_Eruption_Mod_04_C
// (Actor)

class UClass* ASpellActor_Eruption_Mod_04_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SpellActor_Eruption_Mod_04_C");

	return Clss;
}


// SpellActor_Eruption_Mod_04_C SpellActor_Eruption_Mod_04.Default__SpellActor_Eruption_Mod_04_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ASpellActor_Eruption_Mod_04_C* ASpellActor_Eruption_Mod_04_C::GetDefaultObj()
{
	static class ASpellActor_Eruption_Mod_04_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ASpellActor_Eruption_Mod_04_C*>(ASpellActor_Eruption_Mod_04_C::StaticClass()->DefaultObject);

	return Default;
}


// Function SpellActor_Eruption_Mod_04.SpellActor_Eruption_Mod_04_C.OnRep_SingularityDamageType
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ASpellActor_Eruption_Mod_04_C::OnRep_SingularityDamageType()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpellActor_Eruption_Mod_04_C", "OnRep_SingularityDamageType");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SpellActor_Eruption_Mod_04.SpellActor_Eruption_Mod_04_C.ReturnSingularityOffset
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class Enum_SpellDeliveryMethodA                                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     ReturnValue                                                      (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     Temp_struct_Variable                                             (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     K2Node_Select_Default                                            (IsPlainOldData, NoDestructor, HasGetValueTypeHash)

struct FVector ASpellActor_Eruption_Mod_04_C::ReturnSingularityOffset(enum class Enum_SpellDeliveryMethod A, bool Temp_bool_Variable, bool CallFunc_EqualEqual_ByteByte_ReturnValue, const struct FVector& Temp_struct_Variable, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FVector& K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpellActor_Eruption_Mod_04_C", "ReturnSingularityOffset");

	Params::ASpellActor_Eruption_Mod_04_C_ReturnSingularityOffset_Params Parms{};

	Parms.A = A;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.CallFunc_MakeVector_ReturnValue = CallFunc_MakeVector_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function SpellActor_Eruption_Mod_04.SpellActor_Eruption_Mod_04_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ASpellActor_Eruption_Mod_04_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpellActor_Eruption_Mod_04_C", "UserConstructionScript");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SpellActor_Eruption_Mod_04.SpellActor_Eruption_Mod_04_C.StartSingularity
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ASpellActor_Eruption_Mod_04_C::StartSingularity()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpellActor_Eruption_Mod_04_C", "StartSingularity");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SpellActor_Eruption_Mod_04.SpellActor_Eruption_Mod_04_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ASpellActor_Eruption_Mod_04_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpellActor_Eruption_Mod_04_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SpellActor_Eruption_Mod_04.SpellActor_Eruption_Mod_04_C.ExecuteUbergraph_SpellActor_Eruption_Mod_04
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              Temp_float_Variable                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EOakElementalType       Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UParticleSystem*             Temp_object_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UParticleSystem*             Temp_object_Variable1                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UParticleSystem*             Temp_object_Variable2                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UParticleSystem*             Temp_object_Variable3                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UParticleSystem*             Temp_object_Variable4                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UParticleSystem*             Temp_object_Variable5                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AActor*>              K2Node_MakeArray_Array                                           (ZeroConstructor, ReferenceParm)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_ReturnSingularityOffset_ReturnValue                     (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetValueOfAttribute_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EOakElementalType       CallFunc_GetClassElementalType_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UParticleSystem*             K2Node_Select1_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSingularityInitializationInfoK2Node_MakeStruct_SingularityInitializationInfo                  (None)
// class USingularityComponent*       CallFunc_CreateSingularity_ReturnValue                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ASpellActor_Eruption_Mod_04_C::ExecuteUbergraph_SpellActor_Eruption_Mod_04(int32 EntryPoint, bool Temp_bool_Variable, float Temp_float_Variable, float Temp_float_Variable1, enum class EOakElementalType Temp_byte_Variable, class UParticleSystem* Temp_object_Variable, class UParticleSystem* Temp_object_Variable1, class UParticleSystem* Temp_object_Variable2, class UParticleSystem* Temp_object_Variable3, class UParticleSystem* Temp_object_Variable4, class UParticleSystem* Temp_object_Variable5, TArray<class AActor*>& K2Node_MakeArray_Array, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, const struct FVector& CallFunc_ReturnSingularityOffset_ReturnValue, float K2Node_Select_Default, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_GetValueOfAttribute_ReturnValue, enum class EOakElementalType CallFunc_GetClassElementalType_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, class UParticleSystem* K2Node_Select1_Default, const struct FSingularityInitializationInfo& K2Node_MakeStruct_SingularityInitializationInfo, class USingularityComponent* CallFunc_CreateSingularity_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpellActor_Eruption_Mod_04_C", "ExecuteUbergraph_SpellActor_Eruption_Mod_04");

	Params::ASpellActor_Eruption_Mod_04_C_ExecuteUbergraph_SpellActor_Eruption_Mod_04_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_float_Variable = Temp_float_Variable;
	Parms.Temp_float_Variable1 = Temp_float_Variable1;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.Temp_object_Variable1 = Temp_object_Variable1;
	Parms.Temp_object_Variable2 = Temp_object_Variable2;
	Parms.Temp_object_Variable3 = Temp_object_Variable3;
	Parms.Temp_object_Variable4 = Temp_object_Variable4;
	Parms.Temp_object_Variable5 = Temp_object_Variable5;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_ReturnSingularityOffset_ReturnValue = CallFunc_ReturnSingularityOffset_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_GetValueOfAttribute_ReturnValue = CallFunc_GetValueOfAttribute_ReturnValue;
	Parms.CallFunc_GetClassElementalType_ReturnValue = CallFunc_GetClassElementalType_ReturnValue;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.K2Node_Select1_Default = K2Node_Select1_Default;
	Parms.K2Node_MakeStruct_SingularityInitializationInfo = K2Node_MakeStruct_SingularityInitializationInfo;
	Parms.CallFunc_CreateSingularity_ReturnValue = CallFunc_CreateSingularity_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


