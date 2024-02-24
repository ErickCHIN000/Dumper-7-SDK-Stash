#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BatteryComponent.BatteryComponent_C
// (None)

class UClass* UBatteryComponent_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BatteryComponent_C");

	return Clss;
}


// BatteryComponent_C BatteryComponent.Default__BatteryComponent_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBatteryComponent_C* UBatteryComponent_C::GetDefaultObj()
{
	static class UBatteryComponent_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBatteryComponent_C*>(UBatteryComponent_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BatteryComponent.BatteryComponent_C.CheckBatteryLevel
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_JigMultiplayer_C*        JigComp                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              UID                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Battery_                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FContainerPickupsInfo       CallFunc_GetItemByUID_Item                                       (ContainsInstancedReference, HasGetValueTypeHash)
// bool                               CallFunc_GetItemByUID_Found                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetItemByUID_InMainContainer_                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetContainerItemByInContainerIndex_Found_               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FContainerPickupsInfo       CallFunc_GetContainerItemByInContainerIndex_FoundItem            (ContainsInstancedReference, HasGetValueTypeHash)
// double                             CallFunc_BreakVector2D_X                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector2D_Y                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBatteryComponent_C::CheckBatteryLevel(class UBP_JigMultiplayer_C* JigComp, int32 UID, bool* Battery_, const struct FContainerPickupsInfo& CallFunc_GetItemByUID_Item, bool CallFunc_GetItemByUID_Found, bool CallFunc_GetItemByUID_InMainContainer_, bool CallFunc_GetContainerItemByInContainerIndex_Found_, const struct FContainerPickupsInfo& CallFunc_GetContainerItemByInContainerIndex_FoundItem, double CallFunc_BreakVector2D_X, double CallFunc_BreakVector2D_Y, bool CallFunc_NotEqual_DoubleDouble_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BatteryComponent_C", "CheckBatteryLevel");

	Params::UBatteryComponent_C_CheckBatteryLevel_Params Parms{};

	Parms.JigComp = JigComp;
	Parms.UID = UID;
	Parms.CallFunc_GetItemByUID_Item = CallFunc_GetItemByUID_Item;
	Parms.CallFunc_GetItemByUID_Found = CallFunc_GetItemByUID_Found;
	Parms.CallFunc_GetItemByUID_InMainContainer_ = CallFunc_GetItemByUID_InMainContainer_;
	Parms.CallFunc_GetContainerItemByInContainerIndex_Found_ = CallFunc_GetContainerItemByInContainerIndex_Found_;
	Parms.CallFunc_GetContainerItemByInContainerIndex_FoundItem = CallFunc_GetContainerItemByInContainerIndex_FoundItem;
	Parms.CallFunc_BreakVector2D_X = CallFunc_BreakVector2D_X;
	Parms.CallFunc_BreakVector2D_Y = CallFunc_BreakVector2D_Y;
	Parms.CallFunc_NotEqual_DoubleDouble_ReturnValue = CallFunc_NotEqual_DoubleDouble_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Battery_ != nullptr)
		*Battery_ = Parms.Battery_;

}


// Function BatteryComponent.BatteryComponent_C.UseBattery
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_JigMultiplayer_C*        JigComp                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              UID                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             MinusDur                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             NewDur                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Successful_                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FContainerPickupsInfo       CallFunc_GetItemByUID_Item                                       (ContainsInstancedReference, HasGetValueTypeHash)
// bool                               CallFunc_GetItemByUID_Found                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetItemByUID_InMainContainer_                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetContainerItemByInContainerIndex_Found_               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FContainerPickupsInfo       CallFunc_GetContainerItemByInContainerIndex_FoundItem            (ContainsInstancedReference, HasGetValueTypeHash)
// double                             CallFunc_ServerFunc_UpdateDurabilityByUID_Item_NewDur            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBatteryComponent_C::UseBattery(class UBP_JigMultiplayer_C* JigComp, int32 UID, double MinusDur, double* NewDur, bool* Successful_, const struct FContainerPickupsInfo& CallFunc_GetItemByUID_Item, bool CallFunc_GetItemByUID_Found, bool CallFunc_GetItemByUID_InMainContainer_, bool CallFunc_GetContainerItemByInContainerIndex_Found_, const struct FContainerPickupsInfo& CallFunc_GetContainerItemByInContainerIndex_FoundItem, double CallFunc_ServerFunc_UpdateDurabilityByUID_Item_NewDur)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BatteryComponent_C", "UseBattery");

	Params::UBatteryComponent_C_UseBattery_Params Parms{};

	Parms.JigComp = JigComp;
	Parms.UID = UID;
	Parms.MinusDur = MinusDur;
	Parms.CallFunc_GetItemByUID_Item = CallFunc_GetItemByUID_Item;
	Parms.CallFunc_GetItemByUID_Found = CallFunc_GetItemByUID_Found;
	Parms.CallFunc_GetItemByUID_InMainContainer_ = CallFunc_GetItemByUID_InMainContainer_;
	Parms.CallFunc_GetContainerItemByInContainerIndex_Found_ = CallFunc_GetContainerItemByInContainerIndex_Found_;
	Parms.CallFunc_GetContainerItemByInContainerIndex_FoundItem = CallFunc_GetContainerItemByInContainerIndex_FoundItem;
	Parms.CallFunc_ServerFunc_UpdateDurabilityByUID_Item_NewDur = CallFunc_ServerFunc_UpdateDurabilityByUID_Item_NewDur;

	UObject::ProcessEvent(Func, &Parms);

	if (NewDur != nullptr)
		*NewDur = Parms.NewDur;

	if (Successful_ != nullptr)
		*Successful_ = Parms.Successful_;

}


// Function BatteryComponent.BatteryComponent_C.Svr_Initialise
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBatteryComponent_C::Svr_Initialise()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BatteryComponent_C", "Svr_Initialise");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BatteryComponent.BatteryComponent_C.ExecuteUbergraph_BatteryComponent
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBatteryComponent_C::ExecuteUbergraph_BatteryComponent(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BatteryComponent_C", "ExecuteUbergraph_BatteryComponent");

	Params::UBatteryComponent_C_ExecuteUbergraph_BatteryComponent_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


