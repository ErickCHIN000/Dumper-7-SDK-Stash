#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TEDProjectile_Gluttony.TEDProjectile_Gluttony_C
// (Actor)

class UClass* ATEDProjectile_Gluttony_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TEDProjectile_Gluttony_C");

	return Clss;
}


// TEDProjectile_Gluttony_C TEDProjectile_Gluttony.Default__TEDProjectile_Gluttony_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ATEDProjectile_Gluttony_C* ATEDProjectile_Gluttony_C::GetDefaultObj()
{
	static class ATEDProjectile_Gluttony_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ATEDProjectile_Gluttony_C*>(ATEDProjectile_Gluttony_C::StaticClass()->DefaultObject);

	return Default;
}


// Function TEDProjectile_Gluttony.TEDProjectile_Gluttony_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ATEDProjectile_Gluttony_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TEDProjectile_Gluttony_C", "UserConstructionScript");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TEDProjectile_Gluttony.TEDProjectile_Gluttony_C.GbxAsyncRequest_Spawned_716E430B44F27D168947B0BBD172BBC3
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      Actor                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              InstanceIndex                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ATEDProjectile_Gluttony_C::GbxAsyncRequest_Spawned_716E430B44F27D168947B0BBD172BBC3(class AActor* Actor, int32 InstanceIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TEDProjectile_Gluttony_C", "GbxAsyncRequest_Spawned_716E430B44F27D168947B0BBD172BBC3");

	Params::ATEDProjectile_Gluttony_C_GbxAsyncRequest_Spawned_716E430B44F27D168947B0BBD172BBC3_Params Parms{};

	Parms.Actor = Actor;
	Parms.InstanceIndex = InstanceIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TEDProjectile_Gluttony.TEDProjectile_Gluttony_C.OnBeginExplode
// (Event, Protected, BlueprintEvent)
// Parameters:

void ATEDProjectile_Gluttony_C::OnBeginExplode()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TEDProjectile_Gluttony_C", "OnBeginExplode");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TEDProjectile_Gluttony.TEDProjectile_Gluttony_C.OnExplode
// (Event, Protected, BlueprintEvent)
// Parameters:

void ATEDProjectile_Gluttony_C::OnExplode()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TEDProjectile_Gluttony_C", "OnExplode");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TEDProjectile_Gluttony.TEDProjectile_Gluttony_C.ReceiveHit
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*         MyComp                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      Other                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         OtherComp                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bSelfMoved                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     HitLocation                                                      (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     HitNormal                                                        (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     NormalImpulse                                                    (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  Hit                                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void ATEDProjectile_Gluttony_C::ReceiveHit(class UPrimitiveComponent* MyComp, class AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, const struct FVector& HitLocation, const struct FVector& HitNormal, const struct FVector& NormalImpulse, struct FHitResult& Hit)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TEDProjectile_Gluttony_C", "ReceiveHit");

	Params::ATEDProjectile_Gluttony_C_ReceiveHit_Params Parms{};

	Parms.MyComp = MyComp;
	Parms.Other = Other;
	Parms.OtherComp = OtherComp;
	Parms.bSelfMoved = bSelfMoved;
	Parms.HitLocation = HitLocation;
	Parms.HitNormal = HitNormal;
	Parms.NormalImpulse = NormalImpulse;
	Parms.Hit = Hit;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TEDProjectile_Gluttony.TEDProjectile_Gluttony_C.SetupBehaviors
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ATEDProjectile_Gluttony_C::SetupBehaviors()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TEDProjectile_Gluttony_C", "SetupBehaviors");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TEDProjectile_Gluttony.TEDProjectile_Gluttony_C.OnBeginWeaponTransform
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ATEDProjectile_Gluttony_C::OnBeginWeaponTransform()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TEDProjectile_Gluttony_C", "OnBeginWeaponTransform");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TEDProjectile_Gluttony.TEDProjectile_Gluttony_C.ExecuteUbergraph_TEDProjectile_Gluttony
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AIO_TEDProjectile_Gluttony_C*Temp_object_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_CustomEvent_Actor                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_InstanceIndex                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AIO_TEDProjectile_Gluttony_C*K2Node_DynamicCast_AsIO_TEDProjectile_Gluttony                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetCurrentHealthPercent_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Has_Been_Initd_Variable                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// bool                               Temp_bool_IsClosed_Variable                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetValueOfAttribute_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGbxSpawnActorAsyncRequest  K2Node_MakeStruct_GbxSpawnActorAsyncRequest                      (ContainsInstancedReference)
// int32                              CallFunc_SpawnActorAsync_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         K2Node_Event_MyComp                                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_Other                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         K2Node_Event_OtherComp                                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bSelfMoved                                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     K2Node_Event_HitLocation                                         (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     K2Node_Event_HitNormal                                           (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     K2Node_Event_NormalImpulse                                       (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  K2Node_Event_Hit                                                 (ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// class AActor*                      CallFunc_GetOwner_ReturnValue1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AOakCharacter*               K2Node_DynamicCast_AsOak_Character                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess1                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetCurrentHealthPercent_ReturnValue1                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetMaxHealth_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ATEDProjectile_Gluttony_C::ExecuteUbergraph_TEDProjectile_Gluttony(int32 EntryPoint, class AIO_TEDProjectile_Gluttony_C* Temp_object_Variable, class AActor* K2Node_CustomEvent_Actor, int32 K2Node_CustomEvent_InstanceIndex, class AIO_TEDProjectile_Gluttony_C* K2Node_DynamicCast_AsIO_TEDProjectile_Gluttony, bool K2Node_DynamicCast_bSuccess, float CallFunc_GetCurrentHealthPercent_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable, bool CallFunc_Greater_FloatFloat_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool Temp_bool_IsClosed_Variable, float CallFunc_GetValueOfAttribute_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, const struct FGbxSpawnActorAsyncRequest& K2Node_MakeStruct_GbxSpawnActorAsyncRequest, int32 CallFunc_SpawnActorAsync_ReturnValue, class UPrimitiveComponent* K2Node_Event_MyComp, class AActor* K2Node_Event_Other, class UPrimitiveComponent* K2Node_Event_OtherComp, bool K2Node_Event_bSelfMoved, const struct FVector& K2Node_Event_HitLocation, const struct FVector& K2Node_Event_HitNormal, const struct FVector& K2Node_Event_NormalImpulse, const struct FHitResult& K2Node_Event_Hit, class AActor* CallFunc_GetOwner_ReturnValue1, class AOakCharacter* K2Node_DynamicCast_AsOak_Character, bool K2Node_DynamicCast_bSuccess1, float CallFunc_GetCurrentHealthPercent_ReturnValue1, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_GetMaxHealth_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TEDProjectile_Gluttony_C", "ExecuteUbergraph_TEDProjectile_Gluttony");

	Params::ATEDProjectile_Gluttony_C_ExecuteUbergraph_TEDProjectile_Gluttony_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.K2Node_CustomEvent_Actor = K2Node_CustomEvent_Actor;
	Parms.K2Node_CustomEvent_InstanceIndex = K2Node_CustomEvent_InstanceIndex;
	Parms.K2Node_DynamicCast_AsIO_TEDProjectile_Gluttony = K2Node_DynamicCast_AsIO_TEDProjectile_Gluttony;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetCurrentHealthPercent_ReturnValue = CallFunc_GetCurrentHealthPercent_ReturnValue;
	Parms.Temp_bool_Has_Been_Initd_Variable = Temp_bool_Has_Been_Initd_Variable;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.Temp_bool_IsClosed_Variable = Temp_bool_IsClosed_Variable;
	Parms.CallFunc_GetValueOfAttribute_ReturnValue = CallFunc_GetValueOfAttribute_ReturnValue;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.K2Node_MakeStruct_GbxSpawnActorAsyncRequest = K2Node_MakeStruct_GbxSpawnActorAsyncRequest;
	Parms.CallFunc_SpawnActorAsync_ReturnValue = CallFunc_SpawnActorAsync_ReturnValue;
	Parms.K2Node_Event_MyComp = K2Node_Event_MyComp;
	Parms.K2Node_Event_Other = K2Node_Event_Other;
	Parms.K2Node_Event_OtherComp = K2Node_Event_OtherComp;
	Parms.K2Node_Event_bSelfMoved = K2Node_Event_bSelfMoved;
	Parms.K2Node_Event_HitLocation = K2Node_Event_HitLocation;
	Parms.K2Node_Event_HitNormal = K2Node_Event_HitNormal;
	Parms.K2Node_Event_NormalImpulse = K2Node_Event_NormalImpulse;
	Parms.K2Node_Event_Hit = K2Node_Event_Hit;
	Parms.CallFunc_GetOwner_ReturnValue1 = CallFunc_GetOwner_ReturnValue1;
	Parms.K2Node_DynamicCast_AsOak_Character = K2Node_DynamicCast_AsOak_Character;
	Parms.K2Node_DynamicCast_bSuccess1 = K2Node_DynamicCast_bSuccess1;
	Parms.CallFunc_GetCurrentHealthPercent_ReturnValue1 = CallFunc_GetCurrentHealthPercent_ReturnValue1;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_GetMaxHealth_ReturnValue = CallFunc_GetMaxHealth_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue1 = CallFunc_Multiply_FloatFloat_ReturnValue1;

	UObject::ProcessEvent(Func, &Parms);

}

}


