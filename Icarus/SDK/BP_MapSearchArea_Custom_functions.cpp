#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_MapSearchArea_Custom.BP_MapSearchArea_Custom_C
// (Actor)

class UClass* ABP_MapSearchArea_Custom_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_MapSearchArea_Custom_C");

	return Clss;
}


// BP_MapSearchArea_Custom_C BP_MapSearchArea_Custom.Default__BP_MapSearchArea_Custom_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_MapSearchArea_Custom_C* ABP_MapSearchArea_Custom_C::GetDefaultObj()
{
	static class ABP_MapSearchArea_Custom_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_MapSearchArea_Custom_C*>(ABP_MapSearchArea_Custom_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_MapSearchArea_Custom.BP_MapSearchArea_Custom_C.OnRep_MapIconData
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsRowHandleValid_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_MapSearchArea_Custom_C::OnRep_MapIconData(bool CallFunc_IsRowHandleValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MapSearchArea_Custom_C", "OnRep_MapIconData");

	Params::ABP_MapSearchArea_Custom_C_OnRep_MapIconData_Params Parms{};

	Parms.CallFunc_IsRowHandleValid_ReturnValue = CallFunc_IsRowHandleValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_MapSearchArea_Custom.BP_MapSearchArea_Custom_C.OnLoaded_8EBA724943AB38CE185D73B81B2F7D71
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Loaded                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MapSearchArea_Custom_C::OnLoaded_8EBA724943AB38CE185D73B81B2F7D71(class UObject* Loaded)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MapSearchArea_Custom_C", "OnLoaded_8EBA724943AB38CE185D73B81B2F7D71");

	Params::ABP_MapSearchArea_Custom_C_OnLoaded_8EBA724943AB38CE185D73B81B2F7D71_Params Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_MapSearchArea_Custom.BP_MapSearchArea_Custom_C.ReceiveEndPlay
// (Event, Protected, BlueprintEvent)
// Parameters:
// enum class EEndPlayReason          EndPlayReason                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MapSearchArea_Custom_C::ReceiveEndPlay(enum class EEndPlayReason EndPlayReason)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MapSearchArea_Custom_C", "ReceiveEndPlay");

	Params::ABP_MapSearchArea_Custom_C_ReceiveEndPlay_Params Parms{};

	Parms.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_MapSearchArea_Custom.BP_MapSearchArea_Custom_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MapSearchArea_Custom_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MapSearchArea_Custom_C", "ReceiveTick");

	Params::ABP_MapSearchArea_Custom_C_ReceiveTick_Params Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_MapSearchArea_Custom.BP_MapSearchArea_Custom_C.ExecuteUbergraph_BP_MapSearchArea_Custom
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class UObject*                     K2Node_CustomEvent_Loaded                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     Temp_object_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  K2Node_DynamicCast_AsTexture_2D                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class UUMG_RadarMainScreen_C*>CallFunc_GetAllWidgetsOfClass_FoundWidgets                       (ReferenceParm, ContainsInstancedReference)
// class UUMG_RadarMainScreen_C*      CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EEndPlayReason          K2Node_Event_EndPlayReason                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UUMG_RadarMainScreen_C*>CallFunc_GetAllWidgetsOfClass_FoundWidgets_1                     (ReferenceParm, ContainsInstancedReference)
// class UUMG_RadarMainScreen_C*      CallFunc_Array_Get_Item_1                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class UUMG_RadarMainScreen_C*>CallFunc_GetAllWidgetsOfClass_FoundWidgets_2                     (ReferenceParm, ContainsInstancedReference)
// class UUMG_RadarMainScreen_C*      CallFunc_Array_Get_Item_2                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue_2                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FMapSearchArea              CallFunc_GetMapSearchAreaStruct_MapSearchArea                    (None)
// enum class EValid                  CallFunc_GetMapSearchAreaStruct_Paths                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsRowHandleValid_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Event_DeltaSeconds                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMG_RadarSquare_C*          CallFunc_AddQuestSearchArea_Widget                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MapSearchArea_Custom_C::ExecuteUbergraph_BP_MapSearchArea_Custom(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UObject* K2Node_CustomEvent_Loaded, class UObject* Temp_object_Variable, class UTexture2D* K2Node_DynamicCast_AsTexture_2D, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, TArray<class UUMG_RadarMainScreen_C*>& CallFunc_GetAllWidgetsOfClass_FoundWidgets, class UUMG_RadarMainScreen_C* CallFunc_Array_Get_Item, bool CallFunc_Array_IsValidIndex_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, enum class EEndPlayReason K2Node_Event_EndPlayReason, TArray<class UUMG_RadarMainScreen_C*>& CallFunc_GetAllWidgetsOfClass_FoundWidgets_1, class UUMG_RadarMainScreen_C* CallFunc_Array_Get_Item_1, bool CallFunc_Array_IsValidIndex_ReturnValue_1, TArray<class UUMG_RadarMainScreen_C*>& CallFunc_GetAllWidgetsOfClass_FoundWidgets_2, class UUMG_RadarMainScreen_C* CallFunc_Array_Get_Item_2, bool CallFunc_Array_IsValidIndex_ReturnValue_2, const struct FMapSearchArea& CallFunc_GetMapSearchAreaStruct_MapSearchArea, enum class EValid CallFunc_GetMapSearchAreaStruct_Paths, bool CallFunc_IsRowHandleValid_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, float K2Node_Event_DeltaSeconds, class UUMG_RadarSquare_C* CallFunc_AddQuestSearchArea_Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MapSearchArea_Custom_C", "ExecuteUbergraph_BP_MapSearchArea_Custom");

	Params::ABP_MapSearchArea_Custom_C_ExecuteUbergraph_BP_MapSearchArea_Custom_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CustomEvent_Loaded = K2Node_CustomEvent_Loaded;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.K2Node_DynamicCast_AsTexture_2D = K2Node_DynamicCast_AsTexture_2D;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetAllWidgetsOfClass_FoundWidgets = CallFunc_GetAllWidgetsOfClass_FoundWidgets;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.K2Node_Event_EndPlayReason = K2Node_Event_EndPlayReason;
	Parms.CallFunc_GetAllWidgetsOfClass_FoundWidgets_1 = CallFunc_GetAllWidgetsOfClass_FoundWidgets_1;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue_1 = CallFunc_Array_IsValidIndex_ReturnValue_1;
	Parms.CallFunc_GetAllWidgetsOfClass_FoundWidgets_2 = CallFunc_GetAllWidgetsOfClass_FoundWidgets_2;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue_2 = CallFunc_Array_IsValidIndex_ReturnValue_2;
	Parms.CallFunc_GetMapSearchAreaStruct_MapSearchArea = CallFunc_GetMapSearchAreaStruct_MapSearchArea;
	Parms.CallFunc_GetMapSearchAreaStruct_Paths = CallFunc_GetMapSearchAreaStruct_Paths;
	Parms.CallFunc_IsRowHandleValid_ReturnValue = CallFunc_IsRowHandleValid_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;
	Parms.CallFunc_AddQuestSearchArea_Widget = CallFunc_AddQuestSearchArea_Widget;

	UObject::ProcessEvent(Func, &Parms);

}

}


