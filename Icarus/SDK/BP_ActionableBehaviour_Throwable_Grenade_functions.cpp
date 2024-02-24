#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_ActionableBehaviour_Throwable_Grenade.BP_ActionableBehaviour_Throwable_Grenade_C
// (None)

class UClass* UBP_ActionableBehaviour_Throwable_Grenade_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ActionableBehaviour_Throwable_Grenade_C");

	return Clss;
}


// BP_ActionableBehaviour_Throwable_Grenade_C BP_ActionableBehaviour_Throwable_Grenade.Default__BP_ActionableBehaviour_Throwable_Grenade_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_ActionableBehaviour_Throwable_Grenade_C* UBP_ActionableBehaviour_Throwable_Grenade_C::GetDefaultObj()
{
	static class UBP_ActionableBehaviour_Throwable_Grenade_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_ActionableBehaviour_Throwable_Grenade_C*>(UBP_ActionableBehaviour_Throwable_Grenade_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_ActionableBehaviour_Throwable_Grenade.BP_ActionableBehaviour_Throwable_Grenade_C.IsCharging
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               Charging                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsCharging_Charging                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_ActionableBehaviour_Throwable_Grenade_C::IsCharging(bool* Charging, bool CallFunc_IsCharging_Charging, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionableBehaviour_Throwable_Grenade_C", "IsCharging");

	Params::UBP_ActionableBehaviour_Throwable_Grenade_C_IsCharging_Params Parms{};

	Parms.CallFunc_IsCharging_Charging = CallFunc_IsCharging_Charging;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Charging != nullptr)
		*Charging = Parms.Charging;

}


// Function BP_ActionableBehaviour_Throwable_Grenade.BP_ActionableBehaviour_Throwable_Grenade_C.RequestThrow
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_CanThrow_CanThrow                                       (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_ActionableBehaviour_Throwable_Grenade_C::RequestThrow(bool CallFunc_CanThrow_CanThrow)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionableBehaviour_Throwable_Grenade_C", "RequestThrow");

	Params::UBP_ActionableBehaviour_Throwable_Grenade_C_RequestThrow_Params Parms{};

	Parms.CallFunc_CanThrow_CanThrow = CallFunc_CanThrow_CanThrow;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ActionableBehaviour_Throwable_Grenade.BP_ActionableBehaviour_Throwable_Grenade_C.CanThrow
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               CanThrow                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_CanThrow_CanThrow                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_ActionableBehaviour_Throwable_Grenade_C::CanThrow(bool* CanThrow, bool CallFunc_CanThrow_CanThrow, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionableBehaviour_Throwable_Grenade_C", "CanThrow");

	Params::UBP_ActionableBehaviour_Throwable_Grenade_C_CanThrow_Params Parms{};

	Parms.CallFunc_CanThrow_CanThrow = CallFunc_CanThrow_CanThrow;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (CanThrow != nullptr)
		*CanThrow = Parms.CanThrow;

}


// Function BP_ActionableBehaviour_Throwable_Grenade.BP_ActionableBehaviour_Throwable_Grenade_C.OnTraitAnimNotify
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FAnimNotifyEvent            Notify                                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// class AActor*                      AnimInstancePawn                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ActionableBehaviour_Throwable_Grenade_C::OnTraitAnimNotify(struct FAnimNotifyEvent& Notify, class AActor* AnimInstancePawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionableBehaviour_Throwable_Grenade_C", "OnTraitAnimNotify");

	Params::UBP_ActionableBehaviour_Throwable_Grenade_C_OnTraitAnimNotify_Params Parms{};

	Parms.Notify = Notify;
	Parms.AnimInstancePawn = AnimInstancePawn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ActionableBehaviour_Throwable_Grenade.BP_ActionableBehaviour_Throwable_Grenade_C.ExecuteUbergraph_BP_ActionableBehaviour_Throwable_Grenade
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FAnimNotifyEvent            K2Node_Event_Notify                                              (ConstParm, ContainsInstancedReference)
// class AActor*                      K2Node_Event_AnimInstancePawn                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UIcarusAnimNotify*           K2Node_DynamicCast_AsIcarus_Anim_Notify                          (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchString_CmpSuccess                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_ActionableBehaviour_Throwable_Grenade_C::ExecuteUbergraph_BP_ActionableBehaviour_Throwable_Grenade(int32 EntryPoint, const struct FAnimNotifyEvent& K2Node_Event_Notify, class AActor* K2Node_Event_AnimInstancePawn, class UIcarusAnimNotify* K2Node_DynamicCast_AsIcarus_Anim_Notify, bool K2Node_DynamicCast_bSuccess, bool K2Node_SwitchString_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionableBehaviour_Throwable_Grenade_C", "ExecuteUbergraph_BP_ActionableBehaviour_Throwable_Grenade");

	Params::UBP_ActionableBehaviour_Throwable_Grenade_C_ExecuteUbergraph_BP_ActionableBehaviour_Throwable_Grenade_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_Notify = K2Node_Event_Notify;
	Parms.K2Node_Event_AnimInstancePawn = K2Node_Event_AnimInstancePawn;
	Parms.K2Node_DynamicCast_AsIcarus_Anim_Notify = K2Node_DynamicCast_AsIcarus_Anim_Notify;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_SwitchString_CmpSuccess = K2Node_SwitchString_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}

}


