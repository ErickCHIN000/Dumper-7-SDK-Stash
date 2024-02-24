#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GG_PActor_Skeletal_base.GG_PActor_Skeletal_base_C
// (Actor)

class UClass* AGG_PActor_Skeletal_base_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GG_PActor_Skeletal_base_C");

	return Clss;
}


// GG_PActor_Skeletal_base_C GG_PActor_Skeletal_base.Default__GG_PActor_Skeletal_base_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AGG_PActor_Skeletal_base_C* AGG_PActor_Skeletal_base_C::GetDefaultObj()
{
	static class AGG_PActor_Skeletal_base_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AGG_PActor_Skeletal_base_C*>(AGG_PActor_Skeletal_base_C::StaticClass()->DefaultObject);

	return Default;
}


// Function GG_PActor_Skeletal_base.GG_PActor_Skeletal_base_C.ReceiveHit
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*         MyComp                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      Other                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         OtherComp                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bSelfMoved                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     HitLocation                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     HitNormal                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     NormalImpulse                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  Hit                                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void AGG_PActor_Skeletal_base_C::ReceiveHit(class UPrimitiveComponent* MyComp, class AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, const struct FVector& HitLocation, const struct FVector& HitNormal, const struct FVector& NormalImpulse, struct FHitResult& Hit)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GG_PActor_Skeletal_base_C", "ReceiveHit");

	Params::AGG_PActor_Skeletal_base_C_ReceiveHit_Params Parms{};

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


// Function GG_PActor_Skeletal_base.GG_PActor_Skeletal_base_C.MulticastHit
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:

void AGG_PActor_Skeletal_base_C::MulticastHit()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GG_PActor_Skeletal_base_C", "MulticastHit");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GG_PActor_Skeletal_base.GG_PActor_Skeletal_base_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AGG_PActor_Skeletal_base_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GG_PActor_Skeletal_base_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GG_PActor_Skeletal_base.GG_PActor_Skeletal_base_C.ExecuteUbergraph_GG_PActor_Skeletal_base
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UPrimitiveComponent*         K2Node_Event_MyComp                                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_Other                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         K2Node_Event_OtherComp                                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bSelfMoved                                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     K2Node_Event_HitLocation                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     K2Node_Event_HitNormal                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     K2Node_Event_NormalImpulse                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  K2Node_Event_Hit                                                 (ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_IsSimulatingPhysics_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void AGG_PActor_Skeletal_base_C::ExecuteUbergraph_GG_PActor_Skeletal_base(int32 EntryPoint, bool CallFunc_HasAuthority_ReturnValue, class UPrimitiveComponent* K2Node_Event_MyComp, class AActor* K2Node_Event_Other, class UPrimitiveComponent* K2Node_Event_OtherComp, bool K2Node_Event_bSelfMoved, const struct FVector& K2Node_Event_HitLocation, const struct FVector& K2Node_Event_HitNormal, const struct FVector& K2Node_Event_NormalImpulse, const struct FHitResult& K2Node_Event_Hit, bool CallFunc_IsSimulatingPhysics_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GG_PActor_Skeletal_base_C", "ExecuteUbergraph_GG_PActor_Skeletal_base");

	Params::AGG_PActor_Skeletal_base_C_ExecuteUbergraph_GG_PActor_Skeletal_base_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.K2Node_Event_MyComp = K2Node_Event_MyComp;
	Parms.K2Node_Event_Other = K2Node_Event_Other;
	Parms.K2Node_Event_OtherComp = K2Node_Event_OtherComp;
	Parms.K2Node_Event_bSelfMoved = K2Node_Event_bSelfMoved;
	Parms.K2Node_Event_HitLocation = K2Node_Event_HitLocation;
	Parms.K2Node_Event_HitNormal = K2Node_Event_HitNormal;
	Parms.K2Node_Event_NormalImpulse = K2Node_Event_NormalImpulse;
	Parms.K2Node_Event_Hit = K2Node_Event_Hit;
	Parms.CallFunc_IsSimulatingPhysics_ReturnValue = CallFunc_IsSimulatingPhysics_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


