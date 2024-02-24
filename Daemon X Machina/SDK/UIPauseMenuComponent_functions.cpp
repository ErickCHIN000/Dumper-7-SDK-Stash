#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass UIPauseMenuComponent.UIPauseMenuComponent_C
// (None)

class UClass* UUIPauseMenuComponent_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UIPauseMenuComponent_C");

	return Clss;
}


// UIPauseMenuComponent_C UIPauseMenuComponent.Default__UIPauseMenuComponent_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUIPauseMenuComponent_C* UUIPauseMenuComponent_C::GetDefaultObj()
{
	static class UUIPauseMenuComponent_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUIPauseMenuComponent_C*>(UUIPauseMenuComponent_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UIPauseMenuComponent.UIPauseMenuComponent_C.InitializeBP
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// class UMsn_pose_top00_C*           K2Node_DynamicCast_AsMsn_Pose_Top_00                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UUIPauseMenuComponent_C::InitializeBP(class UMsn_pose_top00_C* K2Node_DynamicCast_AsMsn_Pose_Top_00, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UIPauseMenuComponent_C", "InitializeBP");

	Params::UUIPauseMenuComponent_C_InitializeBP_Params Parms{};

	Parms.K2Node_DynamicCast_AsMsn_Pose_Top_00 = K2Node_DynamicCast_AsMsn_Pose_Top_00;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


