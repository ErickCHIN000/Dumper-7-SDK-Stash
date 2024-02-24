#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_IcarusFLODTile_Default.BP_IcarusFLODTile_Default_C
// (Actor)

class UClass* ABP_IcarusFLODTile_Default_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_IcarusFLODTile_Default_C");

	return Clss;
}


// BP_IcarusFLODTile_Default_C BP_IcarusFLODTile_Default.Default__BP_IcarusFLODTile_Default_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_IcarusFLODTile_Default_C* ABP_IcarusFLODTile_Default_C::GetDefaultObj()
{
	static class ABP_IcarusFLODTile_Default_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_IcarusFLODTile_Default_C*>(ABP_IcarusFLODTile_Default_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_IcarusFLODTile_Default.BP_IcarusFLODTile_Default_C.ToggleDebugInstancesCurrent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ShowAdvanced                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               NewDebugInstancesCurrent                                         (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_BoolBool_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_IcarusFLODTile_Default_C::ToggleDebugInstancesCurrent(bool ShowAdvanced, bool NewDebugInstancesCurrent, bool CallFunc_NotEqual_BoolBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusFLODTile_Default_C", "ToggleDebugInstancesCurrent");

	Params::ABP_IcarusFLODTile_Default_C_ToggleDebugInstancesCurrent_Params Parms{};

	Parms.ShowAdvanced = ShowAdvanced;
	Parms.NewDebugInstancesCurrent = NewDebugInstancesCurrent;
	Parms.CallFunc_NotEqual_BoolBool_ReturnValue = CallFunc_NotEqual_BoolBool_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_IcarusFLODTile_Default.BP_IcarusFLODTile_Default_C.FLODTileDebugInstancesCurrent
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_IcarusFLODTile_Default_C::FLODTileDebugInstancesCurrent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusFLODTile_Default_C", "FLODTileDebugInstancesCurrent");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_IcarusFLODTile_Default.BP_IcarusFLODTile_Default_C.FLODTileDebugStats
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_IcarusFLODTile_Default_C::FLODTileDebugStats()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusFLODTile_Default_C", "FLODTileDebugStats");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_IcarusFLODTile_Default.BP_IcarusFLODTile_Default_C.FLODTileDebugInstancesCurrentAdv
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_IcarusFLODTile_Default_C::FLODTileDebugInstancesCurrentAdv()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusFLODTile_Default_C", "FLODTileDebugInstancesCurrentAdv");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_IcarusFLODTile_Default.BP_IcarusFLODTile_Default_C.FLODTileDebugDestroyAllInstances
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              RecordIndex                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Restore                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_IcarusFLODTile_Default_C::FLODTileDebugDestroyAllInstances(int32 RecordIndex, bool Restore)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusFLODTile_Default_C", "FLODTileDebugDestroyAllInstances");

	Params::ABP_IcarusFLODTile_Default_C_FLODTileDebugDestroyAllInstances_Params Parms{};

	Parms.RecordIndex = RecordIndex;
	Parms.Restore = Restore;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_IcarusFLODTile_Default.BP_IcarusFLODTile_Default_C.ExecuteUbergraph_BP_IcarusFLODTile_Default
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_RecordIndex                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_Restore                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_IcarusFLODTile_Default_C::ExecuteUbergraph_BP_IcarusFLODTile_Default(int32 EntryPoint, int32 K2Node_CustomEvent_RecordIndex, bool K2Node_CustomEvent_Restore, bool CallFunc_Not_PreBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusFLODTile_Default_C", "ExecuteUbergraph_BP_IcarusFLODTile_Default");

	Params::ABP_IcarusFLODTile_Default_C_ExecuteUbergraph_BP_IcarusFLODTile_Default_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_RecordIndex = K2Node_CustomEvent_RecordIndex;
	Parms.K2Node_CustomEvent_Restore = K2Node_CustomEvent_Restore;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


