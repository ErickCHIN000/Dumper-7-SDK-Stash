#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass abp_fakeHero_playCustomAnim_00.abp_fakeHero_playCustomAnim_00_C
// (None)

class UClass* UAbp_fakeHero_playCustomAnim_00_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("abp_fakeHero_playCustomAnim_00_C");

	return Clss;
}


// abp_fakeHero_playCustomAnim_00_C abp_fakeHero_playCustomAnim_00.Default__abp_fakeHero_playCustomAnim_00_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAbp_fakeHero_playCustomAnim_00_C* UAbp_fakeHero_playCustomAnim_00_C::GetDefaultObj()
{
	static class UAbp_fakeHero_playCustomAnim_00_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAbp_fakeHero_playCustomAnim_00_C*>(UAbp_fakeHero_playCustomAnim_00_C::StaticClass()->DefaultObject);

	return Default;
}


// Function abp_fakeHero_playCustomAnim_00.abp_fakeHero_playCustomAnim_00_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UAbp_fakeHero_playCustomAnim_00_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("abp_fakeHero_playCustomAnim_00_C", "AnimGraph");

	Params::UAbp_fakeHero_playCustomAnim_00_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function abp_fakeHero_playCustomAnim_00.abp_fakeHero_playCustomAnim_00_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaTimeX                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAbp_fakeHero_playCustomAnim_00_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("abp_fakeHero_playCustomAnim_00_C", "BlueprintUpdateAnimation");

	Params::UAbp_fakeHero_playCustomAnim_00_C_BlueprintUpdateAnimation_Params Parms{};

	Parms.DeltaTimeX = DeltaTimeX;

	UObject::ProcessEvent(Func, &Parms);

}


// Function abp_fakeHero_playCustomAnim_00.abp_fakeHero_playCustomAnim_00_C.Set
// (Event, Public, BlueprintEvent)
// Parameters:

void UAbp_fakeHero_playCustomAnim_00_C::Set()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("abp_fakeHero_playCustomAnim_00_C", "Set");



	UObject::ProcessEvent(Func, nullptr);

}


// Function abp_fakeHero_playCustomAnim_00.abp_fakeHero_playCustomAnim_00_C.Init
// (Event, Public, BlueprintEvent)
// Parameters:
// class UAnimSequenceBase*           InCustomAnim                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              InStartPosition                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAbp_fakeHero_playCustomAnim_00_C::Init(class UAnimSequenceBase* InCustomAnim, float InStartPosition)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("abp_fakeHero_playCustomAnim_00_C", "Init");

	Params::UAbp_fakeHero_playCustomAnim_00_C_Init_Params Parms{};

	Parms.InCustomAnim = InCustomAnim;
	Parms.InStartPosition = InStartPosition;

	UObject::ProcessEvent(Func, &Parms);

}


// Function abp_fakeHero_playCustomAnim_00.abp_fakeHero_playCustomAnim_00_C.BlueprintInitializeAnimation
// (Event, Public, BlueprintEvent)
// Parameters:

void UAbp_fakeHero_playCustomAnim_00_C::BlueprintInitializeAnimation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("abp_fakeHero_playCustomAnim_00_C", "BlueprintInitializeAnimation");



	UObject::ProcessEvent(Func, nullptr);

}


// Function abp_fakeHero_playCustomAnim_00.abp_fakeHero_playCustomAnim_00_C.ExecuteUbergraph_abp_fakeHero_playCustomAnim_00
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaTimeX                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimSequenceBase*           K2Node_Event_InCustomAnim                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_InStartPosition                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetWorldDeltaSeconds_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SelectFloat_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FInterpTo_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwningActor_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class Aba_fakeHero_C*              K2Node_DynamicCast_AsBa_Fake_Hero                                (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAbp_fakeHero_playCustomAnim_00_C::ExecuteUbergraph_abp_fakeHero_playCustomAnim_00(int32 EntryPoint, float K2Node_Event_DeltaTimeX, class UAnimSequenceBase* K2Node_Event_InCustomAnim, float K2Node_Event_InStartPosition, float CallFunc_GetWorldDeltaSeconds_ReturnValue, float CallFunc_SelectFloat_ReturnValue, float CallFunc_FInterpTo_ReturnValue, class AActor* CallFunc_GetOwningActor_ReturnValue, class Aba_fakeHero_C* K2Node_DynamicCast_AsBa_Fake_Hero, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("abp_fakeHero_playCustomAnim_00_C", "ExecuteUbergraph_abp_fakeHero_playCustomAnim_00");

	Params::UAbp_fakeHero_playCustomAnim_00_C_ExecuteUbergraph_abp_fakeHero_playCustomAnim_00_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_DeltaTimeX = K2Node_Event_DeltaTimeX;
	Parms.K2Node_Event_InCustomAnim = K2Node_Event_InCustomAnim;
	Parms.K2Node_Event_InStartPosition = K2Node_Event_InStartPosition;
	Parms.CallFunc_GetWorldDeltaSeconds_ReturnValue = CallFunc_GetWorldDeltaSeconds_ReturnValue;
	Parms.CallFunc_SelectFloat_ReturnValue = CallFunc_SelectFloat_ReturnValue;
	Parms.CallFunc_FInterpTo_ReturnValue = CallFunc_FInterpTo_ReturnValue;
	Parms.CallFunc_GetOwningActor_ReturnValue = CallFunc_GetOwningActor_ReturnValue;
	Parms.K2Node_DynamicCast_AsBa_Fake_Hero = K2Node_DynamicCast_AsBa_Fake_Hero;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}

}


