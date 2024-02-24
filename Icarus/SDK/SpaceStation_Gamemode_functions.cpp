#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass SpaceStation_Gamemode.SpaceStation_Gamemode_C
// (Actor)

class UClass* ASpaceStation_Gamemode_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SpaceStation_Gamemode_C");

	return Clss;
}


// SpaceStation_Gamemode_C SpaceStation_Gamemode.Default__SpaceStation_Gamemode_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ASpaceStation_Gamemode_C* ASpaceStation_Gamemode_C::GetDefaultObj()
{
	static class ASpaceStation_Gamemode_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ASpaceStation_Gamemode_C*>(ASpaceStation_Gamemode_C::StaticClass()->DefaultObject);

	return Default;
}


// Function SpaceStation_Gamemode.SpaceStation_Gamemode_C.RequestSessionSettings
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ASpaceStation_Gamemode_C::RequestSessionSettings()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpaceStation_Gamemode_C", "RequestSessionSettings");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SpaceStation_Gamemode.SpaceStation_Gamemode_C.UpdateProspectInfo
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ASpaceStation_Gamemode_C::UpdateProspectInfo()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpaceStation_Gamemode_C", "UpdateProspectInfo");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SpaceStation_Gamemode.SpaceStation_Gamemode_C.ExecuteUbergraph_SpaceStation_Gamemode
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetSessionSettings_NumConnections                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetSessionSettings_NumPrivateConnections                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetSessionSettings_bIsLAN                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetSessionSettings_bIsDedicated                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetSessionSettings_bAllowInvites                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetSessionSettings_bAllowJoinInProgress                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetSessionSettings_bIsAnticheatEnabled                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetSessionSettings_BuildUniqueID                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FSessionPropertyKeyPair>CallFunc_GetSessionSettings_ExtraSettings                        (ReferenceParm)
// enum class EBlueprintResultSwitch  CallFunc_GetSessionSettings_Result                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FProspectInfo               CallFunc_MakeProspectInfoFromExtraSettings_ReturnValue           (None)
// struct FFProspectServerInfo        K2Node_MakeStruct_FProspectServerInfo                            (HasGetValueTypeHash)
// TArray<class ABP_IcarusPlayerControllerSpace_C*>CallFunc_GetAllActorsOfClass_OutActors                           (ReferenceParm)
// class ABP_IcarusPlayerControllerSpace_C*CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Conv_StringToName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FProspectListRowHandle      CallFunc_MakeProspectList_ReturnValue                            (NoDestructor, HasGetValueTypeHash)
// struct FIcarusProspect             CallFunc_GetProspectListStruct_ProspectList                      (None)
// enum class EValid                  CallFunc_GetProspectListStruct_Paths                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ASpaceStation_Gamemode_C::ExecuteUbergraph_SpaceStation_Gamemode(int32 EntryPoint, int32 Temp_int_Array_Index_Variable, int32 CallFunc_GetSessionSettings_NumConnections, int32 CallFunc_GetSessionSettings_NumPrivateConnections, bool CallFunc_GetSessionSettings_bIsLAN, bool CallFunc_GetSessionSettings_bIsDedicated, bool CallFunc_GetSessionSettings_bAllowInvites, bool CallFunc_GetSessionSettings_bAllowJoinInProgress, bool CallFunc_GetSessionSettings_bIsAnticheatEnabled, int32 CallFunc_GetSessionSettings_BuildUniqueID, TArray<struct FSessionPropertyKeyPair>& CallFunc_GetSessionSettings_ExtraSettings, enum class EBlueprintResultSwitch CallFunc_GetSessionSettings_Result, bool K2Node_SwitchEnum_CmpSuccess, const struct FProspectInfo& CallFunc_MakeProspectInfoFromExtraSettings_ReturnValue, const struct FFProspectServerInfo& K2Node_MakeStruct_FProspectServerInfo, TArray<class ABP_IcarusPlayerControllerSpace_C*>& CallFunc_GetAllActorsOfClass_OutActors, class ABP_IcarusPlayerControllerSpace_C* CallFunc_Array_Get_Item, class FName CallFunc_Conv_StringToName_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, const struct FProspectListRowHandle& CallFunc_MakeProspectList_ReturnValue, const struct FIcarusProspect& CallFunc_GetProspectListStruct_ProspectList, enum class EValid CallFunc_GetProspectListStruct_Paths, bool K2Node_SwitchEnum_CmpSuccess_1, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpaceStation_Gamemode_C", "ExecuteUbergraph_SpaceStation_Gamemode");

	Params::ASpaceStation_Gamemode_C_ExecuteUbergraph_SpaceStation_Gamemode_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_GetSessionSettings_NumConnections = CallFunc_GetSessionSettings_NumConnections;
	Parms.CallFunc_GetSessionSettings_NumPrivateConnections = CallFunc_GetSessionSettings_NumPrivateConnections;
	Parms.CallFunc_GetSessionSettings_bIsLAN = CallFunc_GetSessionSettings_bIsLAN;
	Parms.CallFunc_GetSessionSettings_bIsDedicated = CallFunc_GetSessionSettings_bIsDedicated;
	Parms.CallFunc_GetSessionSettings_bAllowInvites = CallFunc_GetSessionSettings_bAllowInvites;
	Parms.CallFunc_GetSessionSettings_bAllowJoinInProgress = CallFunc_GetSessionSettings_bAllowJoinInProgress;
	Parms.CallFunc_GetSessionSettings_bIsAnticheatEnabled = CallFunc_GetSessionSettings_bIsAnticheatEnabled;
	Parms.CallFunc_GetSessionSettings_BuildUniqueID = CallFunc_GetSessionSettings_BuildUniqueID;
	Parms.CallFunc_GetSessionSettings_ExtraSettings = CallFunc_GetSessionSettings_ExtraSettings;
	Parms.CallFunc_GetSessionSettings_Result = CallFunc_GetSessionSettings_Result;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_MakeProspectInfoFromExtraSettings_ReturnValue = CallFunc_MakeProspectInfoFromExtraSettings_ReturnValue;
	Parms.K2Node_MakeStruct_FProspectServerInfo = K2Node_MakeStruct_FProspectServerInfo;
	Parms.CallFunc_GetAllActorsOfClass_OutActors = CallFunc_GetAllActorsOfClass_OutActors;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Conv_StringToName_ReturnValue = CallFunc_Conv_StringToName_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_MakeProspectList_ReturnValue = CallFunc_MakeProspectList_ReturnValue;
	Parms.CallFunc_GetProspectListStruct_ProspectList = CallFunc_GetProspectListStruct_ProspectList;
	Parms.CallFunc_GetProspectListStruct_Paths = CallFunc_GetProspectListStruct_Paths;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


