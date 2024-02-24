#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_LostSpirit.BP_LostSpirit_C
// (Actor)

class UClass* ABP_LostSpirit_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_LostSpirit_C");

	return Clss;
}


// BP_LostSpirit_C BP_LostSpirit.Default__BP_LostSpirit_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_LostSpirit_C* ABP_LostSpirit_C::GetDefaultObj()
{
	static class ABP_LostSpirit_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_LostSpirit_C*>(ABP_LostSpirit_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_LostSpirit.BP_LostSpirit_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMaterialInterface*          CallFunc_GetMaterial_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_LostSpirit_C::UserConstructionScript(class UMaterialInterface* CallFunc_GetMaterial_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_LostSpirit_C", "UserConstructionScript");

	Params::ABP_LostSpirit_C_UserConstructionScript_Params Parms{};

	Parms.CallFunc_GetMaterial_ReturnValue = CallFunc_GetMaterial_ReturnValue;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue = CallFunc_CreateDynamicMaterialInstance_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_LostSpirit.BP_LostSpirit_C.DeactivateLostSpiritTimeline__FinishedFunc
// (BlueprintEvent)
// Parameters:

void ABP_LostSpirit_C::DeactivateLostSpiritTimeline__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_LostSpirit_C", "DeactivateLostSpiritTimeline__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_LostSpirit.BP_LostSpirit_C.DeactivateLostSpiritTimeline__UpdateFunc
// (BlueprintEvent)
// Parameters:

void ABP_LostSpirit_C::DeactivateLostSpiritTimeline__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_LostSpirit_C", "DeactivateLostSpiritTimeline__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_LostSpirit.BP_LostSpirit_C.DeactivateLostSpiritTimeline__ActivateBurst__EventFunc
// (BlueprintEvent)
// Parameters:

void ABP_LostSpirit_C::DeactivateLostSpiritTimeline__ActivateBurst__EventFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_LostSpirit_C", "DeactivateLostSpiritTimeline__ActivateBurst__EventFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_LostSpirit.BP_LostSpirit_C.DeactivateLostSpiritTimeline__Disable VFX__EventFunc
// (BlueprintEvent)
// Parameters:

void ABP_LostSpirit_C::DeactivateLostSpiritTimeline__Disable_VFX__EventFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_LostSpirit_C", "DeactivateLostSpiritTimeline__Disable VFX__EventFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_LostSpirit.BP_LostSpirit_C.SpawnLostSpiritTimeline__FinishedFunc
// (BlueprintEvent)
// Parameters:

void ABP_LostSpirit_C::SpawnLostSpiritTimeline__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_LostSpirit_C", "SpawnLostSpiritTimeline__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_LostSpirit.BP_LostSpirit_C.SpawnLostSpiritTimeline__UpdateFunc
// (BlueprintEvent)
// Parameters:

void ABP_LostSpirit_C::SpawnLostSpiritTimeline__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_LostSpirit_C", "SpawnLostSpiritTimeline__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_LostSpirit.BP_LostSpirit_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_LostSpirit_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_LostSpirit_C", "ReceiveTick");

	Params::ABP_LostSpirit_C_ReceiveTick_Params Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_LostSpirit.BP_LostSpirit_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_LostSpirit_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_LostSpirit_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_LostSpirit.BP_LostSpirit_C.DeactivateLostSpirit
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_LostSpirit_C::DeactivateLostSpirit()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_LostSpirit_C", "DeactivateLostSpirit");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_LostSpirit.BP_LostSpirit_C.ActivateLostSpirit
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_LostSpirit_C::ActivateLostSpirit()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_LostSpirit_C", "ActivateLostSpirit");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_LostSpirit.BP_LostSpirit_C.ExecuteUbergraph_BP_LostSpirit
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Conv_FloatToVector_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaSeconds                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Conv_FloatToVector_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFMODAudioComponent*         CallFunc_PlayEventAttached_ReturnValue                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_LostSpirit_C::ExecuteUbergraph_BP_LostSpirit(int32 EntryPoint, const struct FVector& CallFunc_Conv_FloatToVector_ReturnValue, float K2Node_Event_DeltaSeconds, const struct FVector& CallFunc_Conv_FloatToVector_ReturnValue_1, class UFMODAudioComponent* CallFunc_PlayEventAttached_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_LostSpirit_C", "ExecuteUbergraph_BP_LostSpirit");

	Params::ABP_LostSpirit_C_ExecuteUbergraph_BP_LostSpirit_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_Conv_FloatToVector_ReturnValue = CallFunc_Conv_FloatToVector_ReturnValue;
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;
	Parms.CallFunc_Conv_FloatToVector_ReturnValue_1 = CallFunc_Conv_FloatToVector_ReturnValue_1;
	Parms.CallFunc_PlayEventAttached_ReturnValue = CallFunc_PlayEventAttached_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


