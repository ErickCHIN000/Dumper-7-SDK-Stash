#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Proj_Spell_Barrelmaker.Proj_Spell_Barrelmaker_C
// (Actor)

class UClass* AProj_Spell_Barrelmaker_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Proj_Spell_Barrelmaker_C");

	return Clss;
}


// Proj_Spell_Barrelmaker_C Proj_Spell_Barrelmaker.Default__Proj_Spell_Barrelmaker_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AProj_Spell_Barrelmaker_C* AProj_Spell_Barrelmaker_C::GetDefaultObj()
{
	static class AProj_Spell_Barrelmaker_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AProj_Spell_Barrelmaker_C*>(AProj_Spell_Barrelmaker_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Proj_Spell_Barrelmaker.Proj_Spell_Barrelmaker_C.ConfigureDelivery
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_SpellDeliveryMethodTemp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_SpellDeliveryMethodTemp_byte_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_SpellDeliveryMethodTemp_byte_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_SpellDeliveryMethodTemp_byte_Variable3                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_SpellDeliveryMethodTemp_byte_Variable4                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetValueOfAttribute_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FTrunc_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_SpellDeliveryMethodK2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AProj_Spell_Barrelmaker_C::ConfigureDelivery(int32 Temp_int_Variable, enum class Enum_SpellDeliveryMethod Temp_byte_Variable, enum class Enum_SpellDeliveryMethod Temp_byte_Variable1, enum class Enum_SpellDeliveryMethod Temp_byte_Variable2, enum class Enum_SpellDeliveryMethod Temp_byte_Variable3, enum class Enum_SpellDeliveryMethod Temp_byte_Variable4, float CallFunc_GetValueOfAttribute_ReturnValue, int32 CallFunc_FTrunc_ReturnValue, enum class Enum_SpellDeliveryMethod K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Proj_Spell_Barrelmaker_C", "ConfigureDelivery");

	Params::AProj_Spell_Barrelmaker_C_ConfigureDelivery_Params Parms{};

	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable1 = Temp_byte_Variable1;
	Parms.Temp_byte_Variable2 = Temp_byte_Variable2;
	Parms.Temp_byte_Variable3 = Temp_byte_Variable3;
	Parms.Temp_byte_Variable4 = Temp_byte_Variable4;
	Parms.CallFunc_GetValueOfAttribute_ReturnValue = CallFunc_GetValueOfAttribute_ReturnValue;
	Parms.CallFunc_FTrunc_ReturnValue = CallFunc_FTrunc_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Proj_Spell_Barrelmaker.Proj_Spell_Barrelmaker_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AProj_Spell_Barrelmaker_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Proj_Spell_Barrelmaker_C", "UserConstructionScript");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Proj_Spell_Barrelmaker.Proj_Spell_Barrelmaker_C.GbxAsyncRequest_Spawned_37D1E4F545042658EB03368A7F76022D
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      Actor                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              InstanceIndex                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AProj_Spell_Barrelmaker_C::GbxAsyncRequest_Spawned_37D1E4F545042658EB03368A7F76022D(class AActor* Actor, int32 InstanceIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Proj_Spell_Barrelmaker_C", "GbxAsyncRequest_Spawned_37D1E4F545042658EB03368A7F76022D");

	Params::AProj_Spell_Barrelmaker_C_GbxAsyncRequest_Spawned_37D1E4F545042658EB03368A7F76022D_Params Parms{};

	Parms.Actor = Actor;
	Parms.InstanceIndex = InstanceIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Proj_Spell_Barrelmaker.Proj_Spell_Barrelmaker_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AProj_Spell_Barrelmaker_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Proj_Spell_Barrelmaker_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Proj_Spell_Barrelmaker.Proj_Spell_Barrelmaker_C.SpawnBarrel
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AProj_Spell_Barrelmaker_C::SpawnBarrel()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Proj_Spell_Barrelmaker_C", "SpawnBarrel");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Proj_Spell_Barrelmaker.Proj_Spell_Barrelmaker_C.ExecuteUbergraph_Proj_Spell_Barrelmaker
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EOakElementalType       Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_ExplodingObject_C*       K2Node_DynamicCast_AsBP_Exploding_Object                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABP_ExplodingObject_Barrel_C*K2Node_DynamicCast_AsBP_Exploding_Object_Barrel                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess1                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IBPI_IO_Combat_Barrel_C>CallFunc_BPI_StartFuse_self_CastInput                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable1                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable2                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable3                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable4                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable5                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_CustomEvent_Actor                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_InstanceIndex                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class ABP_ExplodingObject_DaffodilBarrel_Barrelmaker_C*K2Node_DynamicCast_AsBP_Exploding_Object_Daffodil_Barrel_Barrelmaker(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess2                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABP_ExplodingObject_DaffodilBarrel_Barrelmaker_C*Temp_object_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_GetInstigator_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetActorForwardVector_ReturnValue                       (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_GetTransform_ReturnValue                                (IsPlainOldData, NoDestructor)
// struct FGbxSpawnActorAsyncRequest  K2Node_MakeStruct_GbxSpawnActorAsyncRequest                      (ContainsInstancedReference)
// int32                              CallFunc_SpawnActorAsync_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_RandomRotator_ReturnValue                               (IsPlainOldData, NoDestructor)
// enum class EOakElementalType       CallFunc_GetClassElementalType_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AProj_Spell_Barrelmaker_C::ExecuteUbergraph_Proj_Spell_Barrelmaker(int32 EntryPoint, enum class EOakElementalType Temp_byte_Variable, class ABP_ExplodingObject_C* K2Node_DynamicCast_AsBP_Exploding_Object, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, class ABP_ExplodingObject_Barrel_C* K2Node_DynamicCast_AsBP_Exploding_Object_Barrel, bool K2Node_DynamicCast_bSuccess1, TScriptInterface<class IBPI_IO_Combat_Barrel_C> CallFunc_BPI_StartFuse_self_CastInput, int32 Temp_int_Variable, int32 Temp_int_Variable1, int32 Temp_int_Variable2, int32 Temp_int_Variable3, int32 Temp_int_Variable4, int32 Temp_int_Variable5, class AActor* K2Node_CustomEvent_Actor, int32 K2Node_CustomEvent_InstanceIndex, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class ABP_ExplodingObject_DaffodilBarrel_Barrelmaker_C* K2Node_DynamicCast_AsBP_Exploding_Object_Daffodil_Barrel_Barrelmaker, bool K2Node_DynamicCast_bSuccess2, class ABP_ExplodingObject_DaffodilBarrel_Barrelmaker_C* Temp_object_Variable, class APawn* CallFunc_GetInstigator_ReturnValue, const struct FVector& CallFunc_GetActorForwardVector_ReturnValue, const struct FTransform& CallFunc_GetTransform_ReturnValue, const struct FGbxSpawnActorAsyncRequest& K2Node_MakeStruct_GbxSpawnActorAsyncRequest, int32 CallFunc_SpawnActorAsync_ReturnValue, const struct FRotator& CallFunc_RandomRotator_ReturnValue, enum class EOakElementalType CallFunc_GetClassElementalType_ReturnValue, int32 K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Proj_Spell_Barrelmaker_C", "ExecuteUbergraph_Proj_Spell_Barrelmaker");

	Params::AProj_Spell_Barrelmaker_C_ExecuteUbergraph_Proj_Spell_Barrelmaker_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.K2Node_DynamicCast_AsBP_Exploding_Object = K2Node_DynamicCast_AsBP_Exploding_Object;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Exploding_Object_Barrel = K2Node_DynamicCast_AsBP_Exploding_Object_Barrel;
	Parms.K2Node_DynamicCast_bSuccess1 = K2Node_DynamicCast_bSuccess1;
	Parms.CallFunc_BPI_StartFuse_self_CastInput = CallFunc_BPI_StartFuse_self_CastInput;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_int_Variable1 = Temp_int_Variable1;
	Parms.Temp_int_Variable2 = Temp_int_Variable2;
	Parms.Temp_int_Variable3 = Temp_int_Variable3;
	Parms.Temp_int_Variable4 = Temp_int_Variable4;
	Parms.Temp_int_Variable5 = Temp_int_Variable5;
	Parms.K2Node_CustomEvent_Actor = K2Node_CustomEvent_Actor;
	Parms.K2Node_CustomEvent_InstanceIndex = K2Node_CustomEvent_InstanceIndex;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_DynamicCast_AsBP_Exploding_Object_Daffodil_Barrel_Barrelmaker = K2Node_DynamicCast_AsBP_Exploding_Object_Daffodil_Barrel_Barrelmaker;
	Parms.K2Node_DynamicCast_bSuccess2 = K2Node_DynamicCast_bSuccess2;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.CallFunc_GetInstigator_ReturnValue = CallFunc_GetInstigator_ReturnValue;
	Parms.CallFunc_GetActorForwardVector_ReturnValue = CallFunc_GetActorForwardVector_ReturnValue;
	Parms.CallFunc_GetTransform_ReturnValue = CallFunc_GetTransform_ReturnValue;
	Parms.K2Node_MakeStruct_GbxSpawnActorAsyncRequest = K2Node_MakeStruct_GbxSpawnActorAsyncRequest;
	Parms.CallFunc_SpawnActorAsync_ReturnValue = CallFunc_SpawnActorAsync_ReturnValue;
	Parms.CallFunc_RandomRotator_ReturnValue = CallFunc_RandomRotator_ReturnValue;
	Parms.CallFunc_GetClassElementalType_ReturnValue = CallFunc_GetClassElementalType_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}

}


