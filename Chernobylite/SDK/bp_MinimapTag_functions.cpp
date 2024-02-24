#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass bp_MinimapTag.bp_MinimapTag_C
// (Actor)

class UClass* Abp_MinimapTag_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("bp_MinimapTag_C");

	return Clss;
}


// bp_MinimapTag_C bp_MinimapTag.Default__bp_MinimapTag_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class Abp_MinimapTag_C* Abp_MinimapTag_C::GetDefaultObj()
{
	static class Abp_MinimapTag_C* Default = nullptr;

	if (!Default)
		Default = static_cast<Abp_MinimapTag_C*>(Abp_MinimapTag_C::StaticClass()->DefaultObject);

	return Default;
}


// Function bp_MinimapTag.bp_MinimapTag_C.GetObjectsToSave
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UObject*>             ReturnValue                                                      (Parm, OutParm, ReturnParm)

TArray<class UObject*> Abp_MinimapTag_C::GetObjectsToSave()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_MinimapTag_C", "GetObjectsToSave");

	Params::Abp_MinimapTag_C_GetObjectsToSave_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function bp_MinimapTag.bp_MinimapTag_C.HasObjectsToSave
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool Abp_MinimapTag_C::HasObjectsToSave()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_MinimapTag_C", "HasObjectsToSave");

	Params::Abp_MinimapTag_C_HasObjectsToSave_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function bp_MinimapTag.bp_MinimapTag_C.ShouldUpdateOverlapsOnLoad
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool Abp_MinimapTag_C::ShouldUpdateOverlapsOnLoad()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_MinimapTag_C", "ShouldUpdateOverlapsOnLoad");

	Params::Abp_MinimapTag_C_ShouldUpdateOverlapsOnLoad_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function bp_MinimapTag.bp_MinimapTag_C.DisableActivityRangeVolume
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void Abp_MinimapTag_C::DisableActivityRangeVolume()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_MinimapTag_C", "DisableActivityRangeVolume");



	UObject::ProcessEvent(Func, nullptr);

}


// Function bp_MinimapTag.bp_MinimapTag_C.DisableAutoRevealVolume
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void Abp_MinimapTag_C::DisableAutoRevealVolume()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_MinimapTag_C", "DisableAutoRevealVolume");



	UObject::ProcessEvent(Func, nullptr);

}


// Function bp_MinimapTag.bp_MinimapTag_C.GetIsActive
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Is_active                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void Abp_MinimapTag_C::GetIsActive(bool* Is_active)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_MinimapTag_C", "GetIsActive");

	Params::Abp_MinimapTag_C_GetIsActive_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Is_active != nullptr)
		*Is_active = Parms.Is_active;

}


// Function bp_MinimapTag.bp_MinimapTag_C.SetMapAndCompassVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Can_be_ever_displayed_on_compass                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Can_be_ever_displayed_on_map                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void Abp_MinimapTag_C::SetMapAndCompassVisibility(bool Can_be_ever_displayed_on_compass, bool Can_be_ever_displayed_on_map)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_MinimapTag_C", "SetMapAndCompassVisibility");

	Params::Abp_MinimapTag_C_SetMapAndCompassVisibility_Params Parms{};

	Parms.Can_be_ever_displayed_on_compass = Can_be_ever_displayed_on_compass;
	Parms.Can_be_ever_displayed_on_map = Can_be_ever_displayed_on_map;

	UObject::ProcessEvent(Func, &Parms);

}


// Function bp_MinimapTag.bp_MinimapTag_C.GetIsCompassTagEnabled
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               IsEnabled                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)

void Abp_MinimapTag_C::GetIsCompassTagEnabled(bool* IsEnabled, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_MinimapTag_C", "GetIsCompassTagEnabled");

	Params::Abp_MinimapTag_C_GetIsCompassTagEnabled_Params Parms{};

	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (IsEnabled != nullptr)
		*IsEnabled = Parms.IsEnabled;

}


// Function bp_MinimapTag.bp_MinimapTag_C.SetAutoRevealRange
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USceneComponent*             Target                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_K2_GetComponentToWorld_ReturnValue                      (IsPlainOldData, NoDestructor)
// struct FHitResult                  CallFunc_K2_SetWorldTransform_SweepHitResult                     (IsPlainOldData, NoDestructor, ContainsInstancedReference)

void Abp_MinimapTag_C::SetAutoRevealRange(class USceneComponent* Target, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue, const struct FHitResult& CallFunc_K2_SetWorldTransform_SweepHitResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_MinimapTag_C", "SetAutoRevealRange");

	Params::Abp_MinimapTag_C_SetAutoRevealRange_Params Parms{};

	Parms.Target = Target;
	Parms.CallFunc_K2_GetComponentToWorld_ReturnValue = CallFunc_K2_GetComponentToWorld_ReturnValue;
	Parms.CallFunc_K2_SetWorldTransform_SweepHitResult = CallFunc_K2_SetWorldTransform_SweepHitResult;

	UObject::ProcessEvent(Func, &Parms);

}


// Function bp_MinimapTag.bp_MinimapTag_C.Set Is active
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Is_active                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void Abp_MinimapTag_C::Set_Is_active(bool Is_active)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_MinimapTag_C", "Set Is active");

	Params::Abp_MinimapTag_C_Set_Is_active_Params Parms{};

	Parms.Is_active = Is_active;

	UObject::ProcessEvent(Func, &Parms);

}


// Function bp_MinimapTag.bp_MinimapTag_C.GetIsEnabled
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               IsEnabled                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void Abp_MinimapTag_C::GetIsEnabled(bool* IsEnabled, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_MinimapTag_C", "GetIsEnabled");

	Params::Abp_MinimapTag_C_GetIsEnabled_Params Parms{};

	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (IsEnabled != nullptr)
		*IsEnabled = Parms.IsEnabled;

}


// Function bp_MinimapTag.bp_MinimapTag_C.ToggleActivityRange
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Use_activity_range                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void Abp_MinimapTag_C::ToggleActivityRange(bool Use_activity_range)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_MinimapTag_C", "ToggleActivityRange");

	Params::Abp_MinimapTag_C_ToggleActivityRange_Params Parms{};

	Parms.Use_activity_range = Use_activity_range;

	UObject::ProcessEvent(Func, &Parms);

}


// Function bp_MinimapTag.bp_MinimapTag_C.SetNewActivityRange
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USphereComponent*            Sample                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetScaledSphereRadius_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Abp_MinimapTag_C::SetNewActivityRange(class USphereComponent* Sample, float CallFunc_GetScaledSphereRadius_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_MinimapTag_C", "SetNewActivityRange");

	Params::Abp_MinimapTag_C_SetNewActivityRange_Params Parms{};

	Parms.Sample = Sample;
	Parms.CallFunc_GetScaledSphereRadius_ReturnValue = CallFunc_GetScaledSphereRadius_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function bp_MinimapTag.bp_MinimapTag_C.ToggleActive
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Is_active                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void Abp_MinimapTag_C::ToggleActive(bool Is_active)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_MinimapTag_C", "ToggleActive");

	Params::Abp_MinimapTag_C_ToggleActive_Params Parms{};

	Parms.Is_active = Is_active;

	UObject::ProcessEvent(Func, &Parms);

}


// Function bp_MinimapTag.bp_MinimapTag_C.UpdateVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void Abp_MinimapTag_C::UpdateVisibility(bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_MinimapTag_C", "UpdateVisibility");

	Params::Abp_MinimapTag_C_UpdateVisibility_Params Parms{};

	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue_1 = CallFunc_BooleanOR_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function bp_MinimapTag.bp_MinimapTag_C.ShowVisibilityRange
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void Abp_MinimapTag_C::ShowVisibilityRange()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_MinimapTag_C", "ShowVisibilityRange");



	UObject::ProcessEvent(Func, nullptr);

}


// Function bp_MinimapTag.bp_MinimapTag_C.GetIsSecret
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               IsSecret                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void Abp_MinimapTag_C::GetIsSecret(bool* IsSecret)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_MinimapTag_C", "GetIsSecret");

	Params::Abp_MinimapTag_C_GetIsSecret_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (IsSecret != nullptr)
		*IsSecret = Parms.IsSecret;

}


// Function bp_MinimapTag.bp_MinimapTag_C.RevealSecret
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void Abp_MinimapTag_C::RevealSecret(bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_MinimapTag_C", "RevealSecret");

	Params::Abp_MinimapTag_C_RevealSecret_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function bp_MinimapTag.bp_MinimapTag_C.MakeSecret
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void Abp_MinimapTag_C::MakeSecret()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_MinimapTag_C", "MakeSecret");



	UObject::ProcessEvent(Func, nullptr);

}


// Function bp_MinimapTag.bp_MinimapTag_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void Abp_MinimapTag_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_MinimapTag_C", "UserConstructionScript");



	UObject::ProcessEvent(Func, nullptr);

}


// Function bp_MinimapTag.bp_MinimapTag_C.PrepareDataForSave
// (Event, Public, BlueprintEvent)
// Parameters:

void Abp_MinimapTag_C::PrepareDataForSave()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_MinimapTag_C", "PrepareDataForSave");



	UObject::ProcessEvent(Func, nullptr);

}


// Function bp_MinimapTag.bp_MinimapTag_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void Abp_MinimapTag_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_MinimapTag_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function bp_MinimapTag.bp_MinimapTag_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Abp_MinimapTag_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_MinimapTag_C", "ReceiveTick");

	Params::Abp_MinimapTag_C_ReceiveTick_Params Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function bp_MinimapTag.bp_MinimapTag_C.BndEvt__AutoRevealRange_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*         OverlappedComponent                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      OtherActor                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         OtherComp                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              OtherBodyIndex                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bFromSweep                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                  SweepResult                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void Abp_MinimapTag_C::BndEvt__AutoRevealRange_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_MinimapTag_C", "BndEvt__AutoRevealRange_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");

	Params::Abp_MinimapTag_C_BndEvt__AutoRevealRange_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params Parms{};

	Parms.OverlappedComponent = OverlappedComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;
	Parms.bFromSweep = bFromSweep;
	Parms.SweepResult = SweepResult;

	UObject::ProcessEvent(Func, &Parms);

}


// Function bp_MinimapTag.bp_MinimapTag_C.LoadingFinished
// (Event, Public, BlueprintEvent)
// Parameters:

void Abp_MinimapTag_C::LoadingFinished()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_MinimapTag_C", "LoadingFinished");



	UObject::ProcessEvent(Func, nullptr);

}


// Function bp_MinimapTag.bp_MinimapTag_C.BndEvt__Sphere_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*         OverlappedComponent                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      OtherActor                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         OtherComp                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              OtherBodyIndex                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bFromSweep                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                  SweepResult                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void Abp_MinimapTag_C::BndEvt__Sphere_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_MinimapTag_C", "BndEvt__Sphere_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature");

	Params::Abp_MinimapTag_C_BndEvt__Sphere_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature_Params Parms{};

	Parms.OverlappedComponent = OverlappedComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;
	Parms.bFromSweep = bFromSweep;
	Parms.SweepResult = SweepResult;

	UObject::ProcessEvent(Func, &Parms);

}


// Function bp_MinimapTag.bp_MinimapTag_C.BndEvt__Sphere_K2Node_ComponentBoundEvent_4_ComponentEndOverlapSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*         OverlappedComponent                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      OtherActor                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         OtherComp                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              OtherBodyIndex                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Abp_MinimapTag_C::BndEvt__Sphere_K2Node_ComponentBoundEvent_4_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_MinimapTag_C", "BndEvt__Sphere_K2Node_ComponentBoundEvent_4_ComponentEndOverlapSignature__DelegateSignature");

	Params::Abp_MinimapTag_C_BndEvt__Sphere_K2Node_ComponentBoundEvent_4_ComponentEndOverlapSignature__DelegateSignature_Params Parms{};

	Parms.OverlappedComponent = OverlappedComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function bp_MinimapTag.bp_MinimapTag_C.Initiation
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void Abp_MinimapTag_C::Initiation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_MinimapTag_C", "Initiation");



	UObject::ProcessEvent(Func, nullptr);

}


// Function bp_MinimapTag.bp_MinimapTag_C.HackBuildSystem
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void Abp_MinimapTag_C::HackBuildSystem()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_MinimapTag_C", "HackBuildSystem");



	UObject::ProcessEvent(Func, nullptr);

}


// Function bp_MinimapTag.bp_MinimapTag_C.HackCustomOwner
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void Abp_MinimapTag_C::HackCustomOwner()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_MinimapTag_C", "HackCustomOwner");



	UObject::ProcessEvent(Func, nullptr);

}


// Function bp_MinimapTag.bp_MinimapTag_C.ExecuteUbergraph_bp_MinimapTag
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Event_DeltaSeconds                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         K2Node_ComponentBoundEvent_OverlappedComponent_2                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_ComponentBoundEvent_OtherActor_2                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         K2Node_ComponentBoundEvent_OtherComp_2                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_OtherBodyIndex_2                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ComponentBoundEvent_bFromSweep_1                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                  K2Node_ComponentBoundEvent_SweepResult_1                         (ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// class UClass*                      CallFunc_GetObjectClass_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ClassClass_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UPrimitiveComponent*         K2Node_ComponentBoundEvent_OverlappedComponent_1                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_ComponentBoundEvent_OtherActor_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         K2Node_ComponentBoundEvent_OtherComp_1                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_OtherBodyIndex_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ComponentBoundEvent_bFromSweep                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                  K2Node_ComponentBoundEvent_SweepResult                           (ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// class UPrimitiveComponent*         K2Node_ComponentBoundEvent_OverlappedComponent                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_ComponentBoundEvent_OtherActor                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         K2Node_ComponentBoundEvent_OtherComp                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_OtherBodyIndex                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      CallFunc_GetObjectClass_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      CallFunc_GetObjectClass_ReturnValue_2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ClassClass_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ClassClass_ReturnValue_2                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorVector_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorVector_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Subtract_VectorVector_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_VSize_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_FloatFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_3                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void Abp_MinimapTag_C::ExecuteUbergraph_bp_MinimapTag(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue, float K2Node_Event_DeltaSeconds, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent_2, class AActor* K2Node_ComponentBoundEvent_OtherActor_2, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp_2, int32 K2Node_ComponentBoundEvent_OtherBodyIndex_2, bool K2Node_ComponentBoundEvent_bFromSweep_1, const struct FHitResult& K2Node_ComponentBoundEvent_SweepResult_1, class UClass* CallFunc_GetObjectClass_ReturnValue, bool CallFunc_EqualEqual_ClassClass_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent_1, class AActor* K2Node_ComponentBoundEvent_OtherActor_1, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp_1, int32 K2Node_ComponentBoundEvent_OtherBodyIndex_1, bool K2Node_ComponentBoundEvent_bFromSweep, const struct FHitResult& K2Node_ComponentBoundEvent_SweepResult, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent, class AActor* K2Node_ComponentBoundEvent_OtherActor, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp, int32 K2Node_ComponentBoundEvent_OtherBodyIndex, class UClass* CallFunc_GetObjectClass_ReturnValue_1, class UClass* CallFunc_GetObjectClass_ReturnValue_2, bool CallFunc_EqualEqual_ClassClass_ReturnValue_1, bool CallFunc_EqualEqual_ClassClass_ReturnValue_2, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_2, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue_1, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, float CallFunc_VSize_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_MinimapTag_C", "ExecuteUbergraph_bp_MinimapTag");

	Params::Abp_MinimapTag_C_ExecuteUbergraph_bp_MinimapTag_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;
	Parms.K2Node_ComponentBoundEvent_OverlappedComponent_2 = K2Node_ComponentBoundEvent_OverlappedComponent_2;
	Parms.K2Node_ComponentBoundEvent_OtherActor_2 = K2Node_ComponentBoundEvent_OtherActor_2;
	Parms.K2Node_ComponentBoundEvent_OtherComp_2 = K2Node_ComponentBoundEvent_OtherComp_2;
	Parms.K2Node_ComponentBoundEvent_OtherBodyIndex_2 = K2Node_ComponentBoundEvent_OtherBodyIndex_2;
	Parms.K2Node_ComponentBoundEvent_bFromSweep_1 = K2Node_ComponentBoundEvent_bFromSweep_1;
	Parms.K2Node_ComponentBoundEvent_SweepResult_1 = K2Node_ComponentBoundEvent_SweepResult_1;
	Parms.CallFunc_GetObjectClass_ReturnValue = CallFunc_GetObjectClass_ReturnValue;
	Parms.CallFunc_EqualEqual_ClassClass_ReturnValue = CallFunc_EqualEqual_ClassClass_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.K2Node_ComponentBoundEvent_OverlappedComponent_1 = K2Node_ComponentBoundEvent_OverlappedComponent_1;
	Parms.K2Node_ComponentBoundEvent_OtherActor_1 = K2Node_ComponentBoundEvent_OtherActor_1;
	Parms.K2Node_ComponentBoundEvent_OtherComp_1 = K2Node_ComponentBoundEvent_OtherComp_1;
	Parms.K2Node_ComponentBoundEvent_OtherBodyIndex_1 = K2Node_ComponentBoundEvent_OtherBodyIndex_1;
	Parms.K2Node_ComponentBoundEvent_bFromSweep = K2Node_ComponentBoundEvent_bFromSweep;
	Parms.K2Node_ComponentBoundEvent_SweepResult = K2Node_ComponentBoundEvent_SweepResult;
	Parms.K2Node_ComponentBoundEvent_OverlappedComponent = K2Node_ComponentBoundEvent_OverlappedComponent;
	Parms.K2Node_ComponentBoundEvent_OtherActor = K2Node_ComponentBoundEvent_OtherActor;
	Parms.K2Node_ComponentBoundEvent_OtherComp = K2Node_ComponentBoundEvent_OtherComp;
	Parms.K2Node_ComponentBoundEvent_OtherBodyIndex = K2Node_ComponentBoundEvent_OtherBodyIndex;
	Parms.CallFunc_GetObjectClass_ReturnValue_1 = CallFunc_GetObjectClass_ReturnValue_1;
	Parms.CallFunc_GetObjectClass_ReturnValue_2 = CallFunc_GetObjectClass_ReturnValue_2;
	Parms.CallFunc_EqualEqual_ClassClass_ReturnValue_1 = CallFunc_EqualEqual_ClassClass_ReturnValue_1;
	Parms.CallFunc_EqualEqual_ClassClass_ReturnValue_2 = CallFunc_EqualEqual_ClassClass_ReturnValue_2;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_2 = CallFunc_BooleanAND_ReturnValue_2;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue_1 = CallFunc_K2_GetActorLocation_ReturnValue_1;
	Parms.CallFunc_Multiply_VectorVector_ReturnValue = CallFunc_Multiply_VectorVector_ReturnValue;
	Parms.CallFunc_Multiply_VectorVector_ReturnValue_1 = CallFunc_Multiply_VectorVector_ReturnValue_1;
	Parms.CallFunc_Subtract_VectorVector_ReturnValue = CallFunc_Subtract_VectorVector_ReturnValue;
	Parms.CallFunc_VSize_ReturnValue = CallFunc_VSize_ReturnValue;
	Parms.CallFunc_Less_FloatFloat_ReturnValue = CallFunc_Less_FloatFloat_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_3 = CallFunc_BooleanAND_ReturnValue_3;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function bp_MinimapTag.bp_MinimapTag_C.SecretRevealed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void Abp_MinimapTag_C::SecretRevealed__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_MinimapTag_C", "SecretRevealed__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


