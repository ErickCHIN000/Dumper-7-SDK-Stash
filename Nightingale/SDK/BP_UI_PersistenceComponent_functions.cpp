#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_UI_PersistenceComponent.BP_UI_PersistenceComponent_C
// (None)

class UClass* UBP_UI_PersistenceComponent_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_UI_PersistenceComponent_C");

	return Clss;
}


// BP_UI_PersistenceComponent_C BP_UI_PersistenceComponent.Default__BP_UI_PersistenceComponent_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_UI_PersistenceComponent_C* UBP_UI_PersistenceComponent_C::GetDefaultObj()
{
	static class UBP_UI_PersistenceComponent_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_UI_PersistenceComponent_C*>(UBP_UI_PersistenceComponent_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_UI_PersistenceComponent.BP_UI_PersistenceComponent_C.IsDiscoveryRewardTagHandled
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                GameplayTag                                                      (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bResult                                                          (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_GameplayTag_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UBP_UI_PersistenceComponent_C::IsDiscoveryRewardTagHandled(const struct FGameplayTag& GameplayTag, bool bResult, bool CallFunc_EqualEqual_GameplayTag_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_UI_PersistenceComponent_C", "IsDiscoveryRewardTagHandled");

	Params::UBP_UI_PersistenceComponent_C_IsDiscoveryRewardTagHandled_Params Parms{};

	Parms.GameplayTag = GameplayTag;
	Parms.bResult = bResult;
	Parms.CallFunc_EqualEqual_GameplayTag_ReturnValue = CallFunc_EqualEqual_GameplayTag_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_UI_PersistenceComponent.BP_UI_PersistenceComponent_C.OnRep_UnlockedTravelToSanctuary
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_UI_PersistenceComponent_C::OnRep_UnlockedTravelToSanctuary()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_UI_PersistenceComponent_C", "OnRep_UnlockedTravelToSanctuary");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_UI_PersistenceComponent.BP_UI_PersistenceComponent_C.OnRep_HighestHopeMaxReached
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_UI_PersistenceComponent_C::OnRep_HighestHopeMaxReached()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_UI_PersistenceComponent_C", "OnRep_HighestHopeMaxReached");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_UI_PersistenceComponent.BP_UI_PersistenceComponent_C.OnRep_GoalTracker_BG_Opacity
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_UI_PersistenceComponent_C::OnRep_GoalTracker_BG_Opacity()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_UI_PersistenceComponent_C", "OnRep_GoalTracker_BG_Opacity");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_UI_PersistenceComponent.BP_UI_PersistenceComponent_C.OnRep_GoalTracker_TextScale
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_UI_PersistenceComponent_C::OnRep_GoalTracker_TextScale()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_UI_PersistenceComponent_C", "OnRep_GoalTracker_TextScale");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_UI_PersistenceComponent.BP_UI_PersistenceComponent_C.OnRep_GoalTracker_SortbyGroup
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_UI_PersistenceComponent_C::OnRep_GoalTracker_SortbyGroup()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_UI_PersistenceComponent_C", "OnRep_GoalTracker_SortbyGroup");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_UI_PersistenceComponent.BP_UI_PersistenceComponent_C.OnRep_GoalTracker_ShowPanel
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_UI_PersistenceComponent_C::OnRep_GoalTracker_ShowPanel()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_UI_PersistenceComponent_C", "OnRep_GoalTracker_ShowPanel");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_UI_PersistenceComponent.BP_UI_PersistenceComponent_C.OnRep_Debug_HideInteractionHighlighting
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_UI_PersistenceComponent_C::OnRep_Debug_HideInteractionHighlighting()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_UI_PersistenceComponent_C", "OnRep_Debug_HideInteractionHighlighting");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_UI_PersistenceComponent.BP_UI_PersistenceComponent_C.OnRep_Debug_HideWaterMark
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_UI_PersistenceComponent_C::OnRep_Debug_HideWaterMark()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_UI_PersistenceComponent_C", "OnRep_Debug_HideWaterMark");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_UI_PersistenceComponent.BP_UI_PersistenceComponent_C.OnRep_DebugShowEncounterTracks
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_UI_PersistenceComponent_C::OnRep_DebugShowEncounterTracks()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_UI_PersistenceComponent_C", "OnRep_DebugShowEncounterTracks");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_UI_PersistenceComponent.BP_UI_PersistenceComponent_C.OnRep_IsGamespaceUIEnabled
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_UI_PersistenceComponent_C::OnRep_IsGamespaceUIEnabled()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_UI_PersistenceComponent_C", "OnRep_IsGamespaceUIEnabled");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_UI_PersistenceComponent.BP_UI_PersistenceComponent_C.OnRep_IsNotificationsEnabled
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_UI_PersistenceComponent_C::OnRep_IsNotificationsEnabled()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_UI_PersistenceComponent_C", "OnRep_IsNotificationsEnabled");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_UI_PersistenceComponent.BP_UI_PersistenceComponent_C.RemovePlayerWaypointFromPersistenceByID
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGuid                       WaypointID                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              IndexToRemove                                                    (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_True_if_break_was_hit_Variable                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// struct FS_WaypointInformation      CallFunc_Array_Get_Item                                          (ContainsInstancedReference, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_GuidGuid_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_UI_PersistenceComponent_C::RemovePlayerWaypointFromPersistenceByID(const struct FGuid& WaypointID, int32 IndexToRemove, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const struct FS_WaypointInformation& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_EqualEqual_GuidGuid_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_UI_PersistenceComponent_C", "RemovePlayerWaypointFromPersistenceByID");

	Params::UBP_UI_PersistenceComponent_C_RemovePlayerWaypointFromPersistenceByID_Params Parms{};

	Parms.WaypointID = WaypointID;
	Parms.IndexToRemove = IndexToRemove;
	Parms.Temp_bool_True_if_break_was_hit_Variable = Temp_bool_True_if_break_was_hit_Variable;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Conv_IntToString_ReturnValue = CallFunc_Conv_IntToString_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_GuidGuid_ReturnValue = CallFunc_EqualEqual_GuidGuid_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_UI_PersistenceComponent.BP_UI_PersistenceComponent_C.AddPlayerWaypointToPersistence
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGuid                       ID                                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     WorldLocation                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDataTableRowHandle         WaypointType                                                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// bool                               ServerVerified                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             AreaRadius                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_WaypointInformation      K2Node_MakeStruct_S_WaypointInformation                          (ContainsInstancedReference, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// float                              K2Node_MakeStruct_AreaRadius_50_A3B286DF40743CBE17C12692BBB73875_ImplicitCast(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_UI_PersistenceComponent_C::AddPlayerWaypointToPersistence(const struct FGuid& ID, const struct FVector& WorldLocation, const struct FDataTableRowHandle& WaypointType, bool ServerVerified, double AreaRadius, const struct FS_WaypointInformation& K2Node_MakeStruct_S_WaypointInformation, int32 CallFunc_Array_Add_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, float K2Node_MakeStruct_AreaRadius_50_A3B286DF40743CBE17C12692BBB73875_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_UI_PersistenceComponent_C", "AddPlayerWaypointToPersistence");

	Params::UBP_UI_PersistenceComponent_C_AddPlayerWaypointToPersistence_Params Parms{};

	Parms.ID = ID;
	Parms.WorldLocation = WorldLocation;
	Parms.WaypointType = WaypointType;
	Parms.ServerVerified = ServerVerified;
	Parms.AreaRadius = AreaRadius;
	Parms.K2Node_MakeStruct_S_WaypointInformation = K2Node_MakeStruct_S_WaypointInformation;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_Conv_IntToString_ReturnValue = CallFunc_Conv_IntToString_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.K2Node_MakeStruct_AreaRadius_50_A3B286DF40743CBE17C12692BBB73875_ImplicitCast = K2Node_MakeStruct_AreaRadius_50_A3B286DF40743CBE17C12692BBB73875_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_UI_PersistenceComponent.BP_UI_PersistenceComponent_C.DB_UpdatePreference_EnviroGroupViz_CelestialControls
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Toggle_GroupVisibilty_CelestialControls                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_UI_PersistenceComponent_C::DB_UpdatePreference_EnviroGroupViz_CelestialControls(bool Toggle_GroupVisibilty_CelestialControls)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_UI_PersistenceComponent_C", "DB_UpdatePreference_EnviroGroupViz_CelestialControls");

	Params::UBP_UI_PersistenceComponent_C_DB_UpdatePreference_EnviroGroupViz_CelestialControls_Params Parms{};

	Parms.Toggle_GroupVisibilty_CelestialControls = Toggle_GroupVisibilty_CelestialControls;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_UI_PersistenceComponent.BP_UI_PersistenceComponent_C.DB_UpdatePreference_EnviroGroupViz_Brightness
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Toggle_GroupVisibilty_Brightness                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_UI_PersistenceComponent_C::DB_UpdatePreference_EnviroGroupViz_Brightness(bool Toggle_GroupVisibilty_Brightness)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_UI_PersistenceComponent_C", "DB_UpdatePreference_EnviroGroupViz_Brightness");

	Params::UBP_UI_PersistenceComponent_C_DB_UpdatePreference_EnviroGroupViz_Brightness_Params Parms{};

	Parms.Toggle_GroupVisibilty_Brightness = Toggle_GroupVisibilty_Brightness;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_UI_PersistenceComponent.BP_UI_PersistenceComponent_C.DB_UpdatePreference_EnviroGroupViz_Season
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Toggle_GroupVisibilty_Season                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_UI_PersistenceComponent_C::DB_UpdatePreference_EnviroGroupViz_Season(bool Toggle_GroupVisibilty_Season)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_UI_PersistenceComponent_C", "DB_UpdatePreference_EnviroGroupViz_Season");

	Params::UBP_UI_PersistenceComponent_C_DB_UpdatePreference_EnviroGroupViz_Season_Params Parms{};

	Parms.Toggle_GroupVisibilty_Season = Toggle_GroupVisibilty_Season;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_UI_PersistenceComponent.BP_UI_PersistenceComponent_C.DB_UpdatePreference_EnviroGroupViz_AtmoFog
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Toggle_GroupVisibilty__AtmoFog                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_UI_PersistenceComponent_C::DB_UpdatePreference_EnviroGroupViz_AtmoFog(bool Toggle_GroupVisibilty__AtmoFog)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_UI_PersistenceComponent_C", "DB_UpdatePreference_EnviroGroupViz_AtmoFog");

	Params::UBP_UI_PersistenceComponent_C_DB_UpdatePreference_EnviroGroupViz_AtmoFog_Params Parms{};

	Parms.Toggle_GroupVisibilty__AtmoFog = Toggle_GroupVisibilty__AtmoFog;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_UI_PersistenceComponent.BP_UI_PersistenceComponent_C.DB_UpdatePreference_EnviroGroupViz_Extras
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Toggle_GroupVisibilty__Extras                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_UI_PersistenceComponent_C::DB_UpdatePreference_EnviroGroupViz_Extras(bool Toggle_GroupVisibilty__Extras)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_UI_PersistenceComponent_C", "DB_UpdatePreference_EnviroGroupViz_Extras");

	Params::UBP_UI_PersistenceComponent_C_DB_UpdatePreference_EnviroGroupViz_Extras_Params Parms{};

	Parms.Toggle_GroupVisibilty__Extras = Toggle_GroupVisibilty__Extras;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_UI_PersistenceComponent.BP_UI_PersistenceComponent_C.DB_ToggleWaterMarkVis
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_UI_PersistenceComponent_C::DB_ToggleWaterMarkVis()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_UI_PersistenceComponent_C", "DB_ToggleWaterMarkVis");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_UI_PersistenceComponent.BP_UI_PersistenceComponent_C.DB_ToggleInteractHighlighting
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_UI_PersistenceComponent_C::DB_ToggleInteractHighlighting()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_UI_PersistenceComponent_C", "DB_ToggleInteractHighlighting");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_UI_PersistenceComponent.BP_UI_PersistenceComponent_C.Set_Acc_FontSize
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              FontSize                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_UI_PersistenceComponent_C::Set_Acc_FontSize(int32 FontSize)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_UI_PersistenceComponent_C", "Set_Acc_FontSize");

	Params::UBP_UI_PersistenceComponent_C_Set_Acc_FontSize_Params Parms{};

	Parms.FontSize = FontSize;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_UI_PersistenceComponent.BP_UI_PersistenceComponent_C.Set_Acc_FontIndex
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              FontIndex                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_UI_PersistenceComponent_C::Set_Acc_FontIndex(int32 FontIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_UI_PersistenceComponent_C", "Set_Acc_FontIndex");

	Params::UBP_UI_PersistenceComponent_C_Set_Acc_FontIndex_Params Parms{};

	Parms.FontIndex = FontIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_UI_PersistenceComponent.BP_UI_PersistenceComponent_C.Set_Acc_BackgroundOpacity
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             BackgroundOpacity                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_UI_PersistenceComponent_C::Set_Acc_BackgroundOpacity(double BackgroundOpacity)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_UI_PersistenceComponent_C", "Set_Acc_BackgroundOpacity");

	Params::UBP_UI_PersistenceComponent_C_Set_Acc_BackgroundOpacity_Params Parms{};

	Parms.BackgroundOpacity = BackgroundOpacity;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_UI_PersistenceComponent.BP_UI_PersistenceComponent_C.SetMenuCam_Pref_FoV
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_UI_PersistenceComponent_C::SetMenuCam_Pref_FoV(double Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_UI_PersistenceComponent_C", "SetMenuCam_Pref_FoV");

	Params::UBP_UI_PersistenceComponent_C_SetMenuCam_Pref_FoV_Params Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_UI_PersistenceComponent.BP_UI_PersistenceComponent_C.SetMenuCam_Pref_Zoom
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_UI_PersistenceComponent_C::SetMenuCam_Pref_Zoom(double Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_UI_PersistenceComponent_C", "SetMenuCam_Pref_Zoom");

	Params::UBP_UI_PersistenceComponent_C_SetMenuCam_Pref_Zoom_Params Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_UI_PersistenceComponent.BP_UI_PersistenceComponent_C.SetMenuCam_Pref_Pedestal
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     MenuCamera_Pedestal                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_UI_PersistenceComponent_C::SetMenuCam_Pref_Pedestal(const struct FVector& MenuCamera_Pedestal)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_UI_PersistenceComponent_C", "SetMenuCam_Pref_Pedestal");

	Params::UBP_UI_PersistenceComponent_C_SetMenuCam_Pref_Pedestal_Params Parms{};

	Parms.MenuCamera_Pedestal = MenuCamera_Pedestal;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_UI_PersistenceComponent.BP_UI_PersistenceComponent_C.SetMenuCam_Pref_ArmRotation
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FRotator                    Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_UI_PersistenceComponent_C::SetMenuCam_Pref_ArmRotation(const struct FRotator& Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_UI_PersistenceComponent_C", "SetMenuCam_Pref_ArmRotation");

	Params::UBP_UI_PersistenceComponent_C_SetMenuCam_Pref_ArmRotation_Params Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_UI_PersistenceComponent.BP_UI_PersistenceComponent_C.DB_UpdatePreference_EnviroGroupViz_Clouds
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               DB_Env_GroupVisibilty_Clouds                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_UI_PersistenceComponent_C::DB_UpdatePreference_EnviroGroupViz_Clouds(bool DB_Env_GroupVisibilty_Clouds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_UI_PersistenceComponent_C", "DB_UpdatePreference_EnviroGroupViz_Clouds");

	Params::UBP_UI_PersistenceComponent_C_DB_UpdatePreference_EnviroGroupViz_Clouds_Params Parms{};

	Parms.DB_Env_GroupVisibilty_Clouds = DB_Env_GroupVisibilty_Clouds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_UI_PersistenceComponent.BP_UI_PersistenceComponent_C.DB_UpdatePreference_EnviroGroupViz_Colors
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               DB_Env_GroupVisibilty_Colors                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_UI_PersistenceComponent_C::DB_UpdatePreference_EnviroGroupViz_Colors(bool DB_Env_GroupVisibilty_Colors)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_UI_PersistenceComponent_C", "DB_UpdatePreference_EnviroGroupViz_Colors");

	Params::UBP_UI_PersistenceComponent_C_DB_UpdatePreference_EnviroGroupViz_Colors_Params Parms{};

	Parms.DB_Env_GroupVisibilty_Colors = DB_Env_GroupVisibilty_Colors;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_UI_PersistenceComponent.BP_UI_PersistenceComponent_C.UpdateDebugMenu_LastUsed
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FS_DebugMenuSettings        DebugSettings                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UBP_UI_PersistenceComponent_C::UpdateDebugMenu_LastUsed(const struct FS_DebugMenuSettings& DebugSettings)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_UI_PersistenceComponent_C", "UpdateDebugMenu_LastUsed");

	Params::UBP_UI_PersistenceComponent_C_UpdateDebugMenu_LastUsed_Params Parms{};

	Parms.DebugSettings = DebugSettings;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_UI_PersistenceComponent.BP_UI_PersistenceComponent_C.Server_SaveGuideBookPreferences
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FS_UI_Preferences_Guidebook GuideBookPreferences                                             (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void UBP_UI_PersistenceComponent_C::Server_SaveGuideBookPreferences(const struct FS_UI_Preferences_Guidebook& GuideBookPreferences)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_UI_PersistenceComponent_C", "Server_SaveGuideBookPreferences");

	Params::UBP_UI_PersistenceComponent_C_Server_SaveGuideBookPreferences_Params Parms{};

	Parms.GuideBookPreferences = GuideBookPreferences;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_UI_PersistenceComponent.BP_UI_PersistenceComponent_C.DebugMenuToggleGamespaceUI
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_UI_PersistenceComponent_C::DebugMenuToggleGamespaceUI()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_UI_PersistenceComponent_C", "DebugMenuToggleGamespaceUI");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_UI_PersistenceComponent.BP_UI_PersistenceComponent_C.ToggleSuppressNotifications
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_UI_PersistenceComponent_C::ToggleSuppressNotifications()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_UI_PersistenceComponent_C", "ToggleSuppressNotifications");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_UI_PersistenceComponent.BP_UI_PersistenceComponent_C.EnableGamespaceUI
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_UI_PersistenceComponent_C::EnableGamespaceUI()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_UI_PersistenceComponent_C", "EnableGamespaceUI");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_UI_PersistenceComponent.BP_UI_PersistenceComponent_C.DisableGamespaceUI
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_UI_PersistenceComponent_C::DisableGamespaceUI()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_UI_PersistenceComponent_C", "DisableGamespaceUI");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_UI_PersistenceComponent.BP_UI_PersistenceComponent_C.SetPreference_Chat_LastActiveChannel
// (Net, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              LastActiveChannel                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_UI_PersistenceComponent_C::SetPreference_Chat_LastActiveChannel(int32 LastActiveChannel)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_UI_PersistenceComponent_C", "SetPreference_Chat_LastActiveChannel");

	Params::UBP_UI_PersistenceComponent_C_SetPreference_Chat_LastActiveChannel_Params Parms{};

	Parms.LastActiveChannel = LastActiveChannel;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_UI_PersistenceComponent.BP_UI_PersistenceComponent_C.SetPreference_Chat_TimeToFadeOut
// (Net, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             Chat_TimeToFade                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_UI_PersistenceComponent_C::SetPreference_Chat_TimeToFadeOut(double Chat_TimeToFade)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_UI_PersistenceComponent_C", "SetPreference_Chat_TimeToFadeOut");

	Params::UBP_UI_PersistenceComponent_C_SetPreference_Chat_TimeToFadeOut_Params Parms{};

	Parms.Chat_TimeToFade = Chat_TimeToFade;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_UI_PersistenceComponent.BP_UI_PersistenceComponent_C.SetPreference_ChatBG_Opacity
// (Net, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             Chat_BG_Opacity                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_UI_PersistenceComponent_C::SetPreference_ChatBG_Opacity(double Chat_BG_Opacity)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_UI_PersistenceComponent_C", "SetPreference_ChatBG_Opacity");

	Params::UBP_UI_PersistenceComponent_C_SetPreference_ChatBG_Opacity_Params Parms{};

	Parms.Chat_BG_Opacity = Chat_BG_Opacity;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_UI_PersistenceComponent.BP_UI_PersistenceComponent_C.ServerEnableGamespaceUI
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_UI_PersistenceComponent_C::ServerEnableGamespaceUI()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_UI_PersistenceComponent_C", "ServerEnableGamespaceUI");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_UI_PersistenceComponent.BP_UI_PersistenceComponent_C.ServerDisableGamespaceUI
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_UI_PersistenceComponent_C::ServerDisableGamespaceUI()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_UI_PersistenceComponent_C", "ServerDisableGamespaceUI");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_UI_PersistenceComponent.BP_UI_PersistenceComponent_C.SaveLastUsedMapZoom
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             LastUsedZoom                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_UI_PersistenceComponent_C::SaveLastUsedMapZoom(double LastUsedZoom)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_UI_PersistenceComponent_C", "SaveLastUsedMapZoom");

	Params::UBP_UI_PersistenceComponent_C_SaveLastUsedMapZoom_Params Parms{};

	Parms.LastUsedZoom = LastUsedZoom;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_UI_PersistenceComponent.BP_UI_PersistenceComponent_C.SetPreference_ChatTextScale
// (Net, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             Chat_TextScale                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_UI_PersistenceComponent_C::SetPreference_ChatTextScale(double Chat_TextScale)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_UI_PersistenceComponent_C", "SetPreference_ChatTextScale");

	Params::UBP_UI_PersistenceComponent_C_SetPreference_ChatTextScale_Params Parms{};

	Parms.Chat_TextScale = Chat_TextScale;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_UI_PersistenceComponent.BP_UI_PersistenceComponent_C.Client_UpdateItemSortOrder
// (Net, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EEntrySortOrder         NewSortOrder                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_UI_PersistenceComponent_C::Client_UpdateItemSortOrder(enum class EEntrySortOrder NewSortOrder)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_UI_PersistenceComponent_C", "Client_UpdateItemSortOrder");

	Params::UBP_UI_PersistenceComponent_C_Client_UpdateItemSortOrder_Params Parms{};

	Parms.NewSortOrder = NewSortOrder;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_UI_PersistenceComponent.BP_UI_PersistenceComponent_C.Server_UpdateItemSortOrder
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EEntrySortOrder         NewSortOrder                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_UI_PersistenceComponent_C::Server_UpdateItemSortOrder(enum class EEntrySortOrder NewSortOrder)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_UI_PersistenceComponent_C", "Server_UpdateItemSortOrder");

	Params::UBP_UI_PersistenceComponent_C_Server_UpdateItemSortOrder_Params Parms{};

	Parms.NewSortOrder = NewSortOrder;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_UI_PersistenceComponent.BP_UI_PersistenceComponent_C.Client_SaveGuideBookPreferences
// (Net, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FS_UI_Preferences_Guidebook GuideBookPreferences                                             (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void UBP_UI_PersistenceComponent_C::Client_SaveGuideBookPreferences(const struct FS_UI_Preferences_Guidebook& GuideBookPreferences)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_UI_PersistenceComponent_C", "Client_SaveGuideBookPreferences");

	Params::UBP_UI_PersistenceComponent_C_Client_SaveGuideBookPreferences_Params Parms{};

	Parms.GuideBookPreferences = GuideBookPreferences;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_UI_PersistenceComponent.BP_UI_PersistenceComponent_C.Server_RefreshFeedbackFields
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        FeedbackScreen_CachedTitle                                       (BlueprintVisible, BlueprintReadOnly, Parm)
// class FText                        FeedbackScreen_CachedDescription                                 (BlueprintVisible, BlueprintReadOnly, Parm)
// int32                              FeedbackScreen_Dropdown1                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              FeedbackScreen_Dropdown2                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_UI_PersistenceComponent_C::Server_RefreshFeedbackFields(class FText FeedbackScreen_CachedTitle, class FText FeedbackScreen_CachedDescription, int32 FeedbackScreen_Dropdown1, int32 FeedbackScreen_Dropdown2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_UI_PersistenceComponent_C", "Server_RefreshFeedbackFields");

	Params::UBP_UI_PersistenceComponent_C_Server_RefreshFeedbackFields_Params Parms{};

	Parms.FeedbackScreen_CachedTitle = FeedbackScreen_CachedTitle;
	Parms.FeedbackScreen_CachedDescription = FeedbackScreen_CachedDescription;
	Parms.FeedbackScreen_Dropdown1 = FeedbackScreen_Dropdown1;
	Parms.FeedbackScreen_Dropdown2 = FeedbackScreen_Dropdown2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_UI_PersistenceComponent.BP_UI_PersistenceComponent_C.Server_SaveHighestHopeMaxReached
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             HighestHopeMaxReached                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_UI_PersistenceComponent_C::Server_SaveHighestHopeMaxReached(double HighestHopeMaxReached)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_UI_PersistenceComponent_C", "Server_SaveHighestHopeMaxReached");

	Params::UBP_UI_PersistenceComponent_C_Server_SaveHighestHopeMaxReached_Params Parms{};

	Parms.HighestHopeMaxReached = HighestHopeMaxReached;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_UI_PersistenceComponent.BP_UI_PersistenceComponent_C.Server_SavePocketWatchMode
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ShowMinimap                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_UI_PersistenceComponent_C::Server_SavePocketWatchMode(bool ShowMinimap)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_UI_PersistenceComponent_C", "Server_SavePocketWatchMode");

	Params::UBP_UI_PersistenceComponent_C_Server_SavePocketWatchMode_Params Parms{};

	Parms.ShowMinimap = ShowMinimap;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_UI_PersistenceComponent.BP_UI_PersistenceComponent_C.Client_SavePocketWatchMode
// (Net, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ShowMinimap                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_UI_PersistenceComponent_C::Client_SavePocketWatchMode(bool ShowMinimap)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_UI_PersistenceComponent_C", "Client_SavePocketWatchMode");

	Params::UBP_UI_PersistenceComponent_C_Client_SavePocketWatchMode_Params Parms{};

	Parms.ShowMinimap = ShowMinimap;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_UI_PersistenceComponent.BP_UI_PersistenceComponent_C.EnableTravelToSanctuary
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_UI_PersistenceComponent_C::EnableTravelToSanctuary()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_UI_PersistenceComponent_C", "EnableTravelToSanctuary");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_UI_PersistenceComponent.BP_UI_PersistenceComponent_C.HandleDiscoveryRewardFromTag
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                GameplayTag                                                      (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void UBP_UI_PersistenceComponent_C::HandleDiscoveryRewardFromTag(const struct FGameplayTag& GameplayTag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_UI_PersistenceComponent_C", "HandleDiscoveryRewardFromTag");

	Params::UBP_UI_PersistenceComponent_C_HandleDiscoveryRewardFromTag_Params Parms{};

	Parms.GameplayTag = GameplayTag;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_UI_PersistenceComponent.BP_UI_PersistenceComponent_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)
// Parameters:

void UBP_UI_PersistenceComponent_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_UI_PersistenceComponent_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_UI_PersistenceComponent.BP_UI_PersistenceComponent_C.ExecuteUbergraph_BP_UI_PersistenceComponent
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APlayerState*                K2Node_DynamicCast_AsPlayer_State                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue_1                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APlayerState*                K2Node_DynamicCast_AsPlayer_State_1                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ANWXPlayerController*        K2Node_DynamicCast_AsNWXPlayer_Controller                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_1                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CanUseSupportCommands_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ANWXPlayerController*        K2Node_DynamicCast_AsNWXPlayer_Controller_1                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CanUseSupportCommands_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue_2                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APlayerState*                K2Node_DynamicCast_AsPlayer_State_2                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_4                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_2                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue_3                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ANWXPlayerController*        K2Node_DynamicCast_AsNWXPlayer_Controller_2                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_5                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerState*                K2Node_DynamicCast_AsPlayer_State_3                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_6                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CanUseSupportCommands_ReturnValue_2                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_3                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ANWXPlayerController*        K2Node_DynamicCast_AsNWXPlayer_Controller_3                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_7                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_Toggle_GroupVisibilty__Extras                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CanUseSupportCommands_ReturnValue_3                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue_4                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_Toggle_GroupVisibilty__AtmoFog                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerState*                K2Node_DynamicCast_AsPlayer_State_4                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_8                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_4                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue_5                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ANWXPlayerController*        K2Node_DynamicCast_AsNWXPlayer_Controller_4                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_9                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerState*                K2Node_DynamicCast_AsPlayer_State_5                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_10                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CanUseSupportCommands_ReturnValue_4                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_5                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ANWXPlayerController*        K2Node_DynamicCast_AsNWXPlayer_Controller_5                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_11                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_Toggle_GroupVisibilty_Season                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CanUseSupportCommands_ReturnValue_5                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue_6                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_Toggle_GroupVisibilty_Brightness              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerState*                K2Node_DynamicCast_AsPlayer_State_6                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_12                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_6                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue_7                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ANWXPlayerController*        K2Node_DynamicCast_AsNWXPlayer_Controller_6                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_13                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerState*                K2Node_DynamicCast_AsPlayer_State_7                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_14                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CanUseSupportCommands_ReturnValue_6                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_7                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ANWXPlayerController*        K2Node_DynamicCast_AsNWXPlayer_Controller_7                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_15                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_Toggle_GroupVisibilty_CelestialControls       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CanUseSupportCommands_ReturnValue_7                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_FontSize                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_FontIndex                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_CustomEvent_BackgroundOpacity                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_CustomEvent_Value_2                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_CustomEvent_Value_1                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     K2Node_CustomEvent_MenuCamera_Pedestal                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    K2Node_CustomEvent_Value                                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_CustomEvent_DB_Env_GroupVisibilty_Clouds                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_DB_Env_GroupVisibilty_Colors                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_DebugMenuSettings        K2Node_CustomEvent_DebugSettings                                 (ZeroConstructor, HasGetValueTypeHash)
// struct FS_UI_Preferences_Guidebook K2Node_CustomEvent_GuideBookPreferences_1                        (HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_3                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_LastActiveChannel                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_4                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_CustomEvent_Chat_TimeToFade                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_CustomEvent_Chat_BG_Opacity                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_CustomEvent_LastUsedZoom                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_CustomEvent_Chat_TextScale                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EEntrySortOrder         K2Node_CustomEvent_NewSortOrder_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EEntrySortOrder         K2Node_CustomEvent_NewSortOrder                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_UI_Preferences_Guidebook K2Node_CustomEvent_GuideBookPreferences                          (HasGetValueTypeHash)
// class FText                        K2Node_CustomEvent_FeedbackScreen_CachedTitle                    (None)
// class FText                        K2Node_CustomEvent_FeedbackScreen_CachedDescription              (None)
// int32                              K2Node_CustomEvent_FeedbackScreen_Dropdown1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_FeedbackScreen_Dropdown2                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue_8                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_CustomEvent_HighestHopeMaxReached                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_ShowMinimap_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_ShowMinimap                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                K2Node_Event_GameplayTag                                         (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_GameplayTag_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue_9                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APlayerState*                K2Node_DynamicCast_AsPlayer_State_8                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_16                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue_10                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_8                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APlayerState*                K2Node_DynamicCast_AsPlayer_State_9                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_17                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ANWXPlayerController*        K2Node_DynamicCast_AsNWXPlayer_Controller_8                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_18                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_9                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CanUseSupportCommands_ReturnValue_8                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ANWXPlayerController*        K2Node_DynamicCast_AsNWXPlayer_Controller_9                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_19                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CanUseSupportCommands_ReturnValue_9                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue_11                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APlayerState*                K2Node_DynamicCast_AsPlayer_State_10                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_20                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_10                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ANWXPlayerController*        K2Node_DynamicCast_AsNWXPlayer_Controller_10                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_21                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CanUseSupportCommands_ReturnValue_10                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_UI_PersistenceComponent_C::ExecuteUbergraph_BP_UI_PersistenceComponent(int32 EntryPoint, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, class AActor* CallFunc_GetOwner_ReturnValue, class APlayerState* K2Node_DynamicCast_AsPlayer_State, bool K2Node_DynamicCast_bSuccess, class AActor* CallFunc_GetOwner_ReturnValue_1, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class APlayerState* K2Node_DynamicCast_AsPlayer_State_1, bool K2Node_DynamicCast_bSuccess_1, class ANWXPlayerController* K2Node_DynamicCast_AsNWXPlayer_Controller, bool K2Node_DynamicCast_bSuccess_2, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1, bool CallFunc_CanUseSupportCommands_ReturnValue, class ANWXPlayerController* K2Node_DynamicCast_AsNWXPlayer_Controller_1, bool K2Node_DynamicCast_bSuccess_3, bool CallFunc_CanUseSupportCommands_ReturnValue_1, class AActor* CallFunc_GetOwner_ReturnValue_2, class APlayerState* K2Node_DynamicCast_AsPlayer_State_2, bool K2Node_DynamicCast_bSuccess_4, class APlayerController* CallFunc_GetPlayerController_ReturnValue_2, class AActor* CallFunc_GetOwner_ReturnValue_3, class ANWXPlayerController* K2Node_DynamicCast_AsNWXPlayer_Controller_2, bool K2Node_DynamicCast_bSuccess_5, class APlayerState* K2Node_DynamicCast_AsPlayer_State_3, bool K2Node_DynamicCast_bSuccess_6, bool CallFunc_CanUseSupportCommands_ReturnValue_2, class APlayerController* CallFunc_GetPlayerController_ReturnValue_3, class ANWXPlayerController* K2Node_DynamicCast_AsNWXPlayer_Controller_3, bool K2Node_DynamicCast_bSuccess_7, bool K2Node_CustomEvent_Toggle_GroupVisibilty__Extras, bool CallFunc_CanUseSupportCommands_ReturnValue_3, class AActor* CallFunc_GetOwner_ReturnValue_4, bool K2Node_CustomEvent_Toggle_GroupVisibilty__AtmoFog, class APlayerState* K2Node_DynamicCast_AsPlayer_State_4, bool K2Node_DynamicCast_bSuccess_8, class APlayerController* CallFunc_GetPlayerController_ReturnValue_4, class AActor* CallFunc_GetOwner_ReturnValue_5, class ANWXPlayerController* K2Node_DynamicCast_AsNWXPlayer_Controller_4, bool K2Node_DynamicCast_bSuccess_9, class APlayerState* K2Node_DynamicCast_AsPlayer_State_5, bool K2Node_DynamicCast_bSuccess_10, bool CallFunc_CanUseSupportCommands_ReturnValue_4, class APlayerController* CallFunc_GetPlayerController_ReturnValue_5, class ANWXPlayerController* K2Node_DynamicCast_AsNWXPlayer_Controller_5, bool K2Node_DynamicCast_bSuccess_11, bool K2Node_CustomEvent_Toggle_GroupVisibilty_Season, bool CallFunc_CanUseSupportCommands_ReturnValue_5, class AActor* CallFunc_GetOwner_ReturnValue_6, bool K2Node_CustomEvent_Toggle_GroupVisibilty_Brightness, class APlayerState* K2Node_DynamicCast_AsPlayer_State_6, bool K2Node_DynamicCast_bSuccess_12, class APlayerController* CallFunc_GetPlayerController_ReturnValue_6, class AActor* CallFunc_GetOwner_ReturnValue_7, class ANWXPlayerController* K2Node_DynamicCast_AsNWXPlayer_Controller_6, bool K2Node_DynamicCast_bSuccess_13, class APlayerState* K2Node_DynamicCast_AsPlayer_State_7, bool K2Node_DynamicCast_bSuccess_14, bool CallFunc_CanUseSupportCommands_ReturnValue_6, class APlayerController* CallFunc_GetPlayerController_ReturnValue_7, class ANWXPlayerController* K2Node_DynamicCast_AsNWXPlayer_Controller_7, bool K2Node_DynamicCast_bSuccess_15, bool K2Node_CustomEvent_Toggle_GroupVisibilty_CelestialControls, bool CallFunc_CanUseSupportCommands_ReturnValue_7, int32 K2Node_CustomEvent_FontSize, int32 K2Node_CustomEvent_FontIndex, double K2Node_CustomEvent_BackgroundOpacity, double K2Node_CustomEvent_Value_2, double K2Node_CustomEvent_Value_1, const struct FVector& K2Node_CustomEvent_MenuCamera_Pedestal, const struct FRotator& K2Node_CustomEvent_Value, bool K2Node_CustomEvent_DB_Env_GroupVisibilty_Clouds, bool K2Node_CustomEvent_DB_Env_GroupVisibilty_Colors, const struct FS_DebugMenuSettings& K2Node_CustomEvent_DebugSettings, const struct FS_UI_Preferences_Guidebook& K2Node_CustomEvent_GuideBookPreferences_1, bool CallFunc_Not_PreBool_ReturnValue_2, bool CallFunc_Not_PreBool_ReturnValue_3, int32 K2Node_CustomEvent_LastActiveChannel, bool CallFunc_Not_PreBool_ReturnValue_4, double K2Node_CustomEvent_Chat_TimeToFade, double K2Node_CustomEvent_Chat_BG_Opacity, double K2Node_CustomEvent_LastUsedZoom, double K2Node_CustomEvent_Chat_TextScale, enum class EEntrySortOrder K2Node_CustomEvent_NewSortOrder_1, enum class EEntrySortOrder K2Node_CustomEvent_NewSortOrder, const struct FS_UI_Preferences_Guidebook& K2Node_CustomEvent_GuideBookPreferences, class FText K2Node_CustomEvent_FeedbackScreen_CachedTitle, class FText K2Node_CustomEvent_FeedbackScreen_CachedDescription, int32 K2Node_CustomEvent_FeedbackScreen_Dropdown1, int32 K2Node_CustomEvent_FeedbackScreen_Dropdown2, class AActor* CallFunc_GetOwner_ReturnValue_8, bool CallFunc_HasAuthority_ReturnValue, double K2Node_CustomEvent_HighestHopeMaxReached, bool K2Node_CustomEvent_ShowMinimap_1, bool K2Node_CustomEvent_ShowMinimap, const struct FGameplayTag& K2Node_Event_GameplayTag, bool CallFunc_EqualEqual_GameplayTag_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue_9, class APlayerState* K2Node_DynamicCast_AsPlayer_State_8, bool K2Node_DynamicCast_bSuccess_16, class AActor* CallFunc_GetOwner_ReturnValue_10, class APlayerController* CallFunc_GetPlayerController_ReturnValue_8, class APlayerState* K2Node_DynamicCast_AsPlayer_State_9, bool K2Node_DynamicCast_bSuccess_17, class ANWXPlayerController* K2Node_DynamicCast_AsNWXPlayer_Controller_8, bool K2Node_DynamicCast_bSuccess_18, class APlayerController* CallFunc_GetPlayerController_ReturnValue_9, bool CallFunc_CanUseSupportCommands_ReturnValue_8, class ANWXPlayerController* K2Node_DynamicCast_AsNWXPlayer_Controller_9, bool K2Node_DynamicCast_bSuccess_19, bool CallFunc_CanUseSupportCommands_ReturnValue_9, class AActor* CallFunc_GetOwner_ReturnValue_11, class APlayerState* K2Node_DynamicCast_AsPlayer_State_10, bool K2Node_DynamicCast_bSuccess_20, class APlayerController* CallFunc_GetPlayerController_ReturnValue_10, class ANWXPlayerController* K2Node_DynamicCast_AsNWXPlayer_Controller_10, bool K2Node_DynamicCast_bSuccess_21, bool CallFunc_CanUseSupportCommands_ReturnValue_10)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_UI_PersistenceComponent_C", "ExecuteUbergraph_BP_UI_PersistenceComponent");

	Params::UBP_UI_PersistenceComponent_C_ExecuteUbergraph_BP_UI_PersistenceComponent_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.K2Node_DynamicCast_AsPlayer_State = K2Node_DynamicCast_AsPlayer_State;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetOwner_ReturnValue_1 = CallFunc_GetOwner_ReturnValue_1;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.K2Node_DynamicCast_AsPlayer_State_1 = K2Node_DynamicCast_AsPlayer_State_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.K2Node_DynamicCast_AsNWXPlayer_Controller = K2Node_DynamicCast_AsNWXPlayer_Controller;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_GetPlayerController_ReturnValue_1 = CallFunc_GetPlayerController_ReturnValue_1;
	Parms.CallFunc_CanUseSupportCommands_ReturnValue = CallFunc_CanUseSupportCommands_ReturnValue;
	Parms.K2Node_DynamicCast_AsNWXPlayer_Controller_1 = K2Node_DynamicCast_AsNWXPlayer_Controller_1;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.CallFunc_CanUseSupportCommands_ReturnValue_1 = CallFunc_CanUseSupportCommands_ReturnValue_1;
	Parms.CallFunc_GetOwner_ReturnValue_2 = CallFunc_GetOwner_ReturnValue_2;
	Parms.K2Node_DynamicCast_AsPlayer_State_2 = K2Node_DynamicCast_AsPlayer_State_2;
	Parms.K2Node_DynamicCast_bSuccess_4 = K2Node_DynamicCast_bSuccess_4;
	Parms.CallFunc_GetPlayerController_ReturnValue_2 = CallFunc_GetPlayerController_ReturnValue_2;
	Parms.CallFunc_GetOwner_ReturnValue_3 = CallFunc_GetOwner_ReturnValue_3;
	Parms.K2Node_DynamicCast_AsNWXPlayer_Controller_2 = K2Node_DynamicCast_AsNWXPlayer_Controller_2;
	Parms.K2Node_DynamicCast_bSuccess_5 = K2Node_DynamicCast_bSuccess_5;
	Parms.K2Node_DynamicCast_AsPlayer_State_3 = K2Node_DynamicCast_AsPlayer_State_3;
	Parms.K2Node_DynamicCast_bSuccess_6 = K2Node_DynamicCast_bSuccess_6;
	Parms.CallFunc_CanUseSupportCommands_ReturnValue_2 = CallFunc_CanUseSupportCommands_ReturnValue_2;
	Parms.CallFunc_GetPlayerController_ReturnValue_3 = CallFunc_GetPlayerController_ReturnValue_3;
	Parms.K2Node_DynamicCast_AsNWXPlayer_Controller_3 = K2Node_DynamicCast_AsNWXPlayer_Controller_3;
	Parms.K2Node_DynamicCast_bSuccess_7 = K2Node_DynamicCast_bSuccess_7;
	Parms.K2Node_CustomEvent_Toggle_GroupVisibilty__Extras = K2Node_CustomEvent_Toggle_GroupVisibilty__Extras;
	Parms.CallFunc_CanUseSupportCommands_ReturnValue_3 = CallFunc_CanUseSupportCommands_ReturnValue_3;
	Parms.CallFunc_GetOwner_ReturnValue_4 = CallFunc_GetOwner_ReturnValue_4;
	Parms.K2Node_CustomEvent_Toggle_GroupVisibilty__AtmoFog = K2Node_CustomEvent_Toggle_GroupVisibilty__AtmoFog;
	Parms.K2Node_DynamicCast_AsPlayer_State_4 = K2Node_DynamicCast_AsPlayer_State_4;
	Parms.K2Node_DynamicCast_bSuccess_8 = K2Node_DynamicCast_bSuccess_8;
	Parms.CallFunc_GetPlayerController_ReturnValue_4 = CallFunc_GetPlayerController_ReturnValue_4;
	Parms.CallFunc_GetOwner_ReturnValue_5 = CallFunc_GetOwner_ReturnValue_5;
	Parms.K2Node_DynamicCast_AsNWXPlayer_Controller_4 = K2Node_DynamicCast_AsNWXPlayer_Controller_4;
	Parms.K2Node_DynamicCast_bSuccess_9 = K2Node_DynamicCast_bSuccess_9;
	Parms.K2Node_DynamicCast_AsPlayer_State_5 = K2Node_DynamicCast_AsPlayer_State_5;
	Parms.K2Node_DynamicCast_bSuccess_10 = K2Node_DynamicCast_bSuccess_10;
	Parms.CallFunc_CanUseSupportCommands_ReturnValue_4 = CallFunc_CanUseSupportCommands_ReturnValue_4;
	Parms.CallFunc_GetPlayerController_ReturnValue_5 = CallFunc_GetPlayerController_ReturnValue_5;
	Parms.K2Node_DynamicCast_AsNWXPlayer_Controller_5 = K2Node_DynamicCast_AsNWXPlayer_Controller_5;
	Parms.K2Node_DynamicCast_bSuccess_11 = K2Node_DynamicCast_bSuccess_11;
	Parms.K2Node_CustomEvent_Toggle_GroupVisibilty_Season = K2Node_CustomEvent_Toggle_GroupVisibilty_Season;
	Parms.CallFunc_CanUseSupportCommands_ReturnValue_5 = CallFunc_CanUseSupportCommands_ReturnValue_5;
	Parms.CallFunc_GetOwner_ReturnValue_6 = CallFunc_GetOwner_ReturnValue_6;
	Parms.K2Node_CustomEvent_Toggle_GroupVisibilty_Brightness = K2Node_CustomEvent_Toggle_GroupVisibilty_Brightness;
	Parms.K2Node_DynamicCast_AsPlayer_State_6 = K2Node_DynamicCast_AsPlayer_State_6;
	Parms.K2Node_DynamicCast_bSuccess_12 = K2Node_DynamicCast_bSuccess_12;
	Parms.CallFunc_GetPlayerController_ReturnValue_6 = CallFunc_GetPlayerController_ReturnValue_6;
	Parms.CallFunc_GetOwner_ReturnValue_7 = CallFunc_GetOwner_ReturnValue_7;
	Parms.K2Node_DynamicCast_AsNWXPlayer_Controller_6 = K2Node_DynamicCast_AsNWXPlayer_Controller_6;
	Parms.K2Node_DynamicCast_bSuccess_13 = K2Node_DynamicCast_bSuccess_13;
	Parms.K2Node_DynamicCast_AsPlayer_State_7 = K2Node_DynamicCast_AsPlayer_State_7;
	Parms.K2Node_DynamicCast_bSuccess_14 = K2Node_DynamicCast_bSuccess_14;
	Parms.CallFunc_CanUseSupportCommands_ReturnValue_6 = CallFunc_CanUseSupportCommands_ReturnValue_6;
	Parms.CallFunc_GetPlayerController_ReturnValue_7 = CallFunc_GetPlayerController_ReturnValue_7;
	Parms.K2Node_DynamicCast_AsNWXPlayer_Controller_7 = K2Node_DynamicCast_AsNWXPlayer_Controller_7;
	Parms.K2Node_DynamicCast_bSuccess_15 = K2Node_DynamicCast_bSuccess_15;
	Parms.K2Node_CustomEvent_Toggle_GroupVisibilty_CelestialControls = K2Node_CustomEvent_Toggle_GroupVisibilty_CelestialControls;
	Parms.CallFunc_CanUseSupportCommands_ReturnValue_7 = CallFunc_CanUseSupportCommands_ReturnValue_7;
	Parms.K2Node_CustomEvent_FontSize = K2Node_CustomEvent_FontSize;
	Parms.K2Node_CustomEvent_FontIndex = K2Node_CustomEvent_FontIndex;
	Parms.K2Node_CustomEvent_BackgroundOpacity = K2Node_CustomEvent_BackgroundOpacity;
	Parms.K2Node_CustomEvent_Value_2 = K2Node_CustomEvent_Value_2;
	Parms.K2Node_CustomEvent_Value_1 = K2Node_CustomEvent_Value_1;
	Parms.K2Node_CustomEvent_MenuCamera_Pedestal = K2Node_CustomEvent_MenuCamera_Pedestal;
	Parms.K2Node_CustomEvent_Value = K2Node_CustomEvent_Value;
	Parms.K2Node_CustomEvent_DB_Env_GroupVisibilty_Clouds = K2Node_CustomEvent_DB_Env_GroupVisibilty_Clouds;
	Parms.K2Node_CustomEvent_DB_Env_GroupVisibilty_Colors = K2Node_CustomEvent_DB_Env_GroupVisibilty_Colors;
	Parms.K2Node_CustomEvent_DebugSettings = K2Node_CustomEvent_DebugSettings;
	Parms.K2Node_CustomEvent_GuideBookPreferences_1 = K2Node_CustomEvent_GuideBookPreferences_1;
	Parms.CallFunc_Not_PreBool_ReturnValue_2 = CallFunc_Not_PreBool_ReturnValue_2;
	Parms.CallFunc_Not_PreBool_ReturnValue_3 = CallFunc_Not_PreBool_ReturnValue_3;
	Parms.K2Node_CustomEvent_LastActiveChannel = K2Node_CustomEvent_LastActiveChannel;
	Parms.CallFunc_Not_PreBool_ReturnValue_4 = CallFunc_Not_PreBool_ReturnValue_4;
	Parms.K2Node_CustomEvent_Chat_TimeToFade = K2Node_CustomEvent_Chat_TimeToFade;
	Parms.K2Node_CustomEvent_Chat_BG_Opacity = K2Node_CustomEvent_Chat_BG_Opacity;
	Parms.K2Node_CustomEvent_LastUsedZoom = K2Node_CustomEvent_LastUsedZoom;
	Parms.K2Node_CustomEvent_Chat_TextScale = K2Node_CustomEvent_Chat_TextScale;
	Parms.K2Node_CustomEvent_NewSortOrder_1 = K2Node_CustomEvent_NewSortOrder_1;
	Parms.K2Node_CustomEvent_NewSortOrder = K2Node_CustomEvent_NewSortOrder;
	Parms.K2Node_CustomEvent_GuideBookPreferences = K2Node_CustomEvent_GuideBookPreferences;
	Parms.K2Node_CustomEvent_FeedbackScreen_CachedTitle = K2Node_CustomEvent_FeedbackScreen_CachedTitle;
	Parms.K2Node_CustomEvent_FeedbackScreen_CachedDescription = K2Node_CustomEvent_FeedbackScreen_CachedDescription;
	Parms.K2Node_CustomEvent_FeedbackScreen_Dropdown1 = K2Node_CustomEvent_FeedbackScreen_Dropdown1;
	Parms.K2Node_CustomEvent_FeedbackScreen_Dropdown2 = K2Node_CustomEvent_FeedbackScreen_Dropdown2;
	Parms.CallFunc_GetOwner_ReturnValue_8 = CallFunc_GetOwner_ReturnValue_8;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.K2Node_CustomEvent_HighestHopeMaxReached = K2Node_CustomEvent_HighestHopeMaxReached;
	Parms.K2Node_CustomEvent_ShowMinimap_1 = K2Node_CustomEvent_ShowMinimap_1;
	Parms.K2Node_CustomEvent_ShowMinimap = K2Node_CustomEvent_ShowMinimap;
	Parms.K2Node_Event_GameplayTag = K2Node_Event_GameplayTag;
	Parms.CallFunc_EqualEqual_GameplayTag_ReturnValue = CallFunc_EqualEqual_GameplayTag_ReturnValue;
	Parms.CallFunc_GetOwner_ReturnValue_9 = CallFunc_GetOwner_ReturnValue_9;
	Parms.K2Node_DynamicCast_AsPlayer_State_8 = K2Node_DynamicCast_AsPlayer_State_8;
	Parms.K2Node_DynamicCast_bSuccess_16 = K2Node_DynamicCast_bSuccess_16;
	Parms.CallFunc_GetOwner_ReturnValue_10 = CallFunc_GetOwner_ReturnValue_10;
	Parms.CallFunc_GetPlayerController_ReturnValue_8 = CallFunc_GetPlayerController_ReturnValue_8;
	Parms.K2Node_DynamicCast_AsPlayer_State_9 = K2Node_DynamicCast_AsPlayer_State_9;
	Parms.K2Node_DynamicCast_bSuccess_17 = K2Node_DynamicCast_bSuccess_17;
	Parms.K2Node_DynamicCast_AsNWXPlayer_Controller_8 = K2Node_DynamicCast_AsNWXPlayer_Controller_8;
	Parms.K2Node_DynamicCast_bSuccess_18 = K2Node_DynamicCast_bSuccess_18;
	Parms.CallFunc_GetPlayerController_ReturnValue_9 = CallFunc_GetPlayerController_ReturnValue_9;
	Parms.CallFunc_CanUseSupportCommands_ReturnValue_8 = CallFunc_CanUseSupportCommands_ReturnValue_8;
	Parms.K2Node_DynamicCast_AsNWXPlayer_Controller_9 = K2Node_DynamicCast_AsNWXPlayer_Controller_9;
	Parms.K2Node_DynamicCast_bSuccess_19 = K2Node_DynamicCast_bSuccess_19;
	Parms.CallFunc_CanUseSupportCommands_ReturnValue_9 = CallFunc_CanUseSupportCommands_ReturnValue_9;
	Parms.CallFunc_GetOwner_ReturnValue_11 = CallFunc_GetOwner_ReturnValue_11;
	Parms.K2Node_DynamicCast_AsPlayer_State_10 = K2Node_DynamicCast_AsPlayer_State_10;
	Parms.K2Node_DynamicCast_bSuccess_20 = K2Node_DynamicCast_bSuccess_20;
	Parms.CallFunc_GetPlayerController_ReturnValue_10 = CallFunc_GetPlayerController_ReturnValue_10;
	Parms.K2Node_DynamicCast_AsNWXPlayer_Controller_10 = K2Node_DynamicCast_AsNWXPlayer_Controller_10;
	Parms.K2Node_DynamicCast_bSuccess_21 = K2Node_DynamicCast_bSuccess_21;
	Parms.CallFunc_CanUseSupportCommands_ReturnValue_10 = CallFunc_CanUseSupportCommands_ReturnValue_10;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_UI_PersistenceComponent.BP_UI_PersistenceComponent_C.HighestMaxHopeUpdated__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_UI_PersistenceComponent_C::HighestMaxHopeUpdated__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_UI_PersistenceComponent_C", "HighestMaxHopeUpdated__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_UI_PersistenceComponent.BP_UI_PersistenceComponent_C.GoalTrackerSettingsUpdated__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_UI_PersistenceComponent_C::GoalTrackerSettingsUpdated__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_UI_PersistenceComponent_C", "GoalTrackerSettingsUpdated__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_UI_PersistenceComponent.BP_UI_PersistenceComponent_C.DB_ToggleInteractHighlightVisibility__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_UI_PersistenceComponent_C::DB_ToggleInteractHighlightVisibility__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_UI_PersistenceComponent_C", "DB_ToggleInteractHighlightVisibility__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_UI_PersistenceComponent.BP_UI_PersistenceComponent_C.ToggleHUDWaterMark__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_UI_PersistenceComponent_C::ToggleHUDWaterMark__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_UI_PersistenceComponent_C", "ToggleHUDWaterMark__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_UI_PersistenceComponent.BP_UI_PersistenceComponent_C.Debug_ShowEncounterTracks__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_UI_PersistenceComponent_C::Debug_ShowEncounterTracks__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_UI_PersistenceComponent_C", "Debug_ShowEncounterTracks__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_UI_PersistenceComponent.BP_UI_PersistenceComponent_C.OnGamespaceUIToggled__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_UI_PersistenceComponent_C::OnGamespaceUIToggled__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_UI_PersistenceComponent_C", "OnGamespaceUIToggled__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_UI_PersistenceComponent.BP_UI_PersistenceComponent_C.ToggleHUDNotifications__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_UI_PersistenceComponent_C::ToggleHUDNotifications__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_UI_PersistenceComponent_C", "ToggleHUDNotifications__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


