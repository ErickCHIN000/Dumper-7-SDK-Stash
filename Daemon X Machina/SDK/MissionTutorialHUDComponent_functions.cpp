#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MissionTutorialHUDComponent.MissionTutorialHUDComponent_C
// (None)

class UClass* UMissionTutorialHUDComponent_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MissionTutorialHUDComponent_C");

	return Clss;
}


// MissionTutorialHUDComponent_C MissionTutorialHUDComponent.Default__MissionTutorialHUDComponent_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMissionTutorialHUDComponent_C* UMissionTutorialHUDComponent_C::GetDefaultObj()
{
	static class UMissionTutorialHUDComponent_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMissionTutorialHUDComponent_C*>(UMissionTutorialHUDComponent_C::StaticClass()->DefaultObject);

	return Default;
}


// Function MissionTutorialHUDComponent.MissionTutorialHUDComponent_C.GetAllAnimationBP
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMissionTutorialHUDComponent_C::GetAllAnimationBP()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MissionTutorialHUDComponent_C", "GetAllAnimationBP");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MissionTutorialHUDComponent.MissionTutorialHUDComponent_C.ExecuteUbergraph_MissionTutorialHUDComponent
// (None)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCmn_tutorial_top01_C*       K2Node_DynamicCast_AsCmn_Tutorial_Top_01                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UMissionTutorialHUDComponent_C::ExecuteUbergraph_MissionTutorialHUDComponent(int32 EntryPoint, class UCmn_tutorial_top01_C* K2Node_DynamicCast_AsCmn_Tutorial_Top_01, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MissionTutorialHUDComponent_C", "ExecuteUbergraph_MissionTutorialHUDComponent");

	Params::UMissionTutorialHUDComponent_C_ExecuteUbergraph_MissionTutorialHUDComponent_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_DynamicCast_AsCmn_Tutorial_Top_01 = K2Node_DynamicCast_AsCmn_Tutorial_Top_01;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}

}


