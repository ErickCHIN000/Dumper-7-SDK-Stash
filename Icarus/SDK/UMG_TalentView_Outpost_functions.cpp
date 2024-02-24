#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UMG_TalentView_Outpost.UMG_TalentView_Outpost_C
// (None)

class UClass* UUMG_TalentView_Outpost_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UMG_TalentView_Outpost_C");

	return Clss;
}


// UMG_TalentView_Outpost_C UMG_TalentView_Outpost.Default__UMG_TalentView_Outpost_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUMG_TalentView_Outpost_C* UUMG_TalentView_Outpost_C::GetDefaultObj()
{
	static class UUMG_TalentView_Outpost_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUMG_TalentView_Outpost_C*>(UUMG_TalentView_Outpost_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG_TalentView_Outpost.UMG_TalentView_Outpost_C.GetGraphWidget
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UTalentGraphWidget*          ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_GetActiveWidget_ReturnValue                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTalentGraphWidget*          K2Node_DynamicCast_AsTalent_Graph_Widget                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

class UTalentGraphWidget* UUMG_TalentView_Outpost_C::GetGraphWidget(class UWidget* CallFunc_GetActiveWidget_ReturnValue, class UTalentGraphWidget* K2Node_DynamicCast_AsTalent_Graph_Widget, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_TalentView_Outpost_C", "GetGraphWidget");

	Params::UUMG_TalentView_Outpost_C_GetGraphWidget_Params Parms{};

	Parms.CallFunc_GetActiveWidget_ReturnValue = CallFunc_GetActiveWidget_ReturnValue;
	Parms.K2Node_DynamicCast_AsTalent_Graph_Widget = K2Node_DynamicCast_AsTalent_Graph_Widget;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UMG_TalentView_Outpost.UMG_TalentView_Outpost_C.CanAddTalent
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FRowHandle                  TalentRowHandle                                                  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// bool                               CanAddTalent                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               FlagFound                                                        (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EValid                  CallFunc_CastToOutpostsRowHandle_Paths                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FOutpostsRowHandle          CallFunc_CastToOutpostsRowHandle_ReturnValue                     (NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FOutpost                    CallFunc_GetOutpostsStruct_Outposts                              (None)
// enum class EValid                  CallFunc_GetOutpostsStruct_Paths                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FIcarusProspect             CallFunc_GetProspectListStruct_ProspectList                      (None)
// enum class EValid                  CallFunc_GetProspectListStruct_Paths                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFlagsMultiRowHandle        CallFunc_Array_Get_Item                                          (HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFlagSubsystem*              CallFunc_GetGameInstanceSubsystem_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EValid                  CallFunc_GetIcarusPlayerCharacter_IsValid                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AIcarusPlayerCharacter*      CallFunc_GetIcarusPlayerCharacter_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AIcarusPlayerState*          CallFunc_GetIcarusPlayerState_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasFlagPlayer_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_TalentView_Outpost_C::CanAddTalent(const struct FRowHandle& TalentRowHandle, bool* CanAddTalent, bool FlagFound, enum class EValid CallFunc_CastToOutpostsRowHandle_Paths, const struct FOutpostsRowHandle& CallFunc_CastToOutpostsRowHandle_ReturnValue, int32 Temp_int_Array_Index_Variable, const struct FOutpost& CallFunc_GetOutpostsStruct_Outposts, enum class EValid CallFunc_GetOutpostsStruct_Paths, bool K2Node_SwitchEnum_CmpSuccess, bool K2Node_SwitchEnum_CmpSuccess_1, const struct FIcarusProspect& CallFunc_GetProspectListStruct_ProspectList, enum class EValid CallFunc_GetProspectListStruct_Paths, int32 Temp_int_Loop_Counter_Variable, bool K2Node_SwitchEnum_CmpSuccess_2, int32 CallFunc_Add_IntInt_ReturnValue, const struct FFlagsMultiRowHandle& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class UFlagSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, enum class EValid CallFunc_GetIcarusPlayerCharacter_IsValid, class AIcarusPlayerCharacter* CallFunc_GetIcarusPlayerCharacter_ReturnValue, class AIcarusPlayerState* CallFunc_GetIcarusPlayerState_ReturnValue, bool CallFunc_HasFlagPlayer_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_TalentView_Outpost_C", "CanAddTalent");

	Params::UUMG_TalentView_Outpost_C_CanAddTalent_Params Parms{};

	Parms.TalentRowHandle = TalentRowHandle;
	Parms.FlagFound = FlagFound;
	Parms.CallFunc_CastToOutpostsRowHandle_Paths = CallFunc_CastToOutpostsRowHandle_Paths;
	Parms.CallFunc_CastToOutpostsRowHandle_ReturnValue = CallFunc_CastToOutpostsRowHandle_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_GetOutpostsStruct_Outposts = CallFunc_GetOutpostsStruct_Outposts;
	Parms.CallFunc_GetOutpostsStruct_Paths = CallFunc_GetOutpostsStruct_Paths;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.CallFunc_GetProspectListStruct_ProspectList = CallFunc_GetProspectListStruct_ProspectList;
	Parms.CallFunc_GetProspectListStruct_Paths = CallFunc_GetProspectListStruct_Paths;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.K2Node_SwitchEnum_CmpSuccess_2 = K2Node_SwitchEnum_CmpSuccess_2;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue = CallFunc_GetGameInstanceSubsystem_ReturnValue;
	Parms.CallFunc_GetIcarusPlayerCharacter_IsValid = CallFunc_GetIcarusPlayerCharacter_IsValid;
	Parms.CallFunc_GetIcarusPlayerCharacter_ReturnValue = CallFunc_GetIcarusPlayerCharacter_ReturnValue;
	Parms.CallFunc_GetIcarusPlayerState_ReturnValue = CallFunc_GetIcarusPlayerState_ReturnValue;
	Parms.CallFunc_HasFlagPlayer_ReturnValue = CallFunc_HasFlagPlayer_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess_3 = K2Node_SwitchEnum_CmpSuccess_3;

	UObject::ProcessEvent(Func, &Parms);

	if (CanAddTalent != nullptr)
		*CanAddTalent = Parms.CanAddTalent;

}


// Function UMG_TalentView_Outpost.UMG_TalentView_Outpost_C.GetTalentTreeWidgets
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UTalentTreeWidget*>   ReturnValue                                                      (Parm, OutParm, ReturnParm, ContainsInstancedReference)
// TSet<class UTalentTreeWidget*>     Talent_Trees                                                     (Edit, BlueprintVisible, ContainsInstancedReference)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UTalentTreeWidget*>   CallFunc_Set_ToArray_Result                                      (ReferenceParm, ContainsInstancedReference)
// TArray<class UWidget*>             CallFunc_GetAllChildren_ReturnValue                              (ReferenceParm, ContainsInstancedReference)
// class UWidget*                     CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMG_TalentGraph_C*          K2Node_DynamicCast_AsUMG_Talent_Graph                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

TArray<class UTalentTreeWidget*> UUMG_TalentView_Outpost_C::GetTalentTreeWidgets(TSet<class UTalentTreeWidget*> Talent_Trees, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class UTalentTreeWidget*>& CallFunc_Set_ToArray_Result, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue, class UWidget* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class UUMG_TalentGraph_C* K2Node_DynamicCast_AsUMG_Talent_Graph, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_TalentView_Outpost_C", "GetTalentTreeWidgets");

	Params::UUMG_TalentView_Outpost_C_GetTalentTreeWidgets_Params Parms{};

	Parms.Talent_Trees = Talent_Trees;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Set_ToArray_Result = CallFunc_Set_ToArray_Result;
	Parms.CallFunc_GetAllChildren_ReturnValue = CallFunc_GetAllChildren_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.K2Node_DynamicCast_AsUMG_Talent_Graph = K2Node_DynamicCast_AsUMG_Talent_Graph;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UMG_TalentView_Outpost.UMG_TalentView_Outpost_C.Setup
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTalentModelInterface*       TalentModel                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTalentArchetypesRowHandle  CurrentArchetype                                                 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FTalentsRowHandle>   CallFunc_GetTalents_ReturnValue                                  (ConstParm, ReferenceParm)
// TArray<struct FTalentArchetypesRowHandle>CallFunc_GetArchetypes_ReturnValue                               (ConstParm, ReferenceParm)
// struct FTalentArchetypesRowHandle  CallFunc_Array_Get_Item                                          (NoDestructor, HasGetValueTypeHash)
// struct FTalentArchetypesRowHandle  CallFunc_Array_Get_Item_1                                        (NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMG_TalentGraph_C*          CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPanelSlot*                  CallFunc_AddChild_ReturnValue                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMG_TalentArchetype_Player_C*CallFunc_Create_ReturnValue_1                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateChildSize             K2Node_MakeStruct_SlateChildSize                                 (NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UHorizontalBoxSlot*          CallFunc_AddChildToHorizontalBox_ReturnValue                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_TalentView_Outpost_C::Setup(class UTalentModelInterface* TalentModel, const struct FTalentArchetypesRowHandle& CurrentArchetype, int32 Temp_int_Array_Index_Variable, TArray<struct FTalentsRowHandle>& CallFunc_GetTalents_ReturnValue, TArray<struct FTalentArchetypesRowHandle>& CallFunc_GetArchetypes_ReturnValue, const struct FTalentArchetypesRowHandle& CallFunc_Array_Get_Item, const struct FTalentArchetypesRowHandle& CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Loop_Counter_Variable, class UUMG_TalentGraph_C* CallFunc_Create_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class UUMG_TalentArchetype_Player_C* CallFunc_Create_ReturnValue_1, const struct FSlateChildSize& K2Node_MakeStruct_SlateChildSize, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, int32 CallFunc_Array_Add_ReturnValue, class UHorizontalBoxSlot* CallFunc_AddChildToHorizontalBox_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_TalentView_Outpost_C", "Setup");

	Params::UUMG_TalentView_Outpost_C_Setup_Params Parms{};

	Parms.TalentModel = TalentModel;
	Parms.CurrentArchetype = CurrentArchetype;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_GetTalents_ReturnValue = CallFunc_GetTalents_ReturnValue;
	Parms.CallFunc_GetArchetypes_ReturnValue = CallFunc_GetArchetypes_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_AddChild_ReturnValue = CallFunc_AddChild_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Create_ReturnValue_1 = CallFunc_Create_ReturnValue_1;
	Parms.K2Node_MakeStruct_SlateChildSize = K2Node_MakeStruct_SlateChildSize;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_AddChildToHorizontalBox_ReturnValue = CallFunc_AddChildToHorizontalBox_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_TalentView_Outpost.UMG_TalentView_Outpost_C.OnFail_DE41FEFE44CE6B2F6450E9AB88178931
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FResGenerateProspects       Response                                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UUMG_TalentView_Outpost_C::OnFail_DE41FEFE44CE6B2F6450E9AB88178931(struct FResGenerateProspects& Response)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_TalentView_Outpost_C", "OnFail_DE41FEFE44CE6B2F6450E9AB88178931");

	Params::UUMG_TalentView_Outpost_C_OnFail_DE41FEFE44CE6B2F6450E9AB88178931_Params Parms{};

	Parms.Response = Response;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_TalentView_Outpost.UMG_TalentView_Outpost_C.OnSuccess_DE41FEFE44CE6B2F6450E9AB88178931
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FResGenerateProspects       Response                                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UUMG_TalentView_Outpost_C::OnSuccess_DE41FEFE44CE6B2F6450E9AB88178931(struct FResGenerateProspects& Response)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_TalentView_Outpost_C", "OnSuccess_DE41FEFE44CE6B2F6450E9AB88178931");

	Params::UUMG_TalentView_Outpost_C_OnSuccess_DE41FEFE44CE6B2F6450E9AB88178931_Params Parms{};

	Parms.Response = Response;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_TalentView_Outpost.UMG_TalentView_Outpost_C.OnClick
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTalentArchetypesRowHandle  Archetype                                                        (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void UUMG_TalentView_Outpost_C::OnClick(const struct FTalentArchetypesRowHandle& Archetype)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_TalentView_Outpost_C", "OnClick");

	Params::UUMG_TalentView_Outpost_C_OnClick_Params Parms{};

	Parms.Archetype = Archetype;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_TalentView_Outpost.UMG_TalentView_Outpost_C.OnModelViewChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// class UTalentModelInterface*       InModel                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTalentViewInterface*        InView                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_TalentView_Outpost_C::OnModelViewChanged(class UTalentModelInterface* InModel, class UTalentViewInterface* InView)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_TalentView_Outpost_C", "OnModelViewChanged");

	Params::UUMG_TalentView_Outpost_C_OnModelViewChanged_Params Parms{};

	Parms.InModel = InModel;
	Parms.InView = InView;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_TalentView_Outpost.UMG_TalentView_Outpost_C.BndEvt__UMG_BasicButton_2_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UUMG_ButtonBase_C*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_TalentView_Outpost_C::BndEvt__UMG_BasicButton_2_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature(class UUMG_ButtonBase_C* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_TalentView_Outpost_C", "BndEvt__UMG_BasicButton_2_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature");

	Params::UUMG_TalentView_Outpost_C_BndEvt__UMG_BasicButton_2_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_TalentView_Outpost.UMG_TalentView_Outpost_C.ProspectClicked
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTalentsRowHandle           Talent                                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void UUMG_TalentView_Outpost_C::ProspectClicked(const struct FTalentsRowHandle& Talent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_TalentView_Outpost_C", "ProspectClicked");

	Params::UUMG_TalentView_Outpost_C_ProspectClicked_Params Parms{};

	Parms.Talent = Talent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_TalentView_Outpost.UMG_TalentView_Outpost_C.GenerateProspectsFromTalents
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FTalentsRowHandle>   ProspectTalentRowHandles                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UUMG_TalentView_Outpost_C::GenerateProspectsFromTalents(TArray<struct FTalentsRowHandle>& ProspectTalentRowHandles)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_TalentView_Outpost_C", "GenerateProspectsFromTalents");

	Params::UUMG_TalentView_Outpost_C_GenerateProspectsFromTalents_Params Parms{};

	Parms.ProspectTalentRowHandles = ProspectTalentRowHandles;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_TalentView_Outpost.UMG_TalentView_Outpost_C.ExecuteUbergraph_UMG_TalentView_Outpost
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FResGenerateProspects       K2Node_CustomEvent_Response                                      (ConstParm)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// struct FResGenerateProspects       Temp_struct_Variable                                             (None)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FProspectInfo               CallFunc_Array_Get_Item                                          (None)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FResGenerateProspects       K2Node_CustomEvent_Response_1                                    (ConstParm)
// int32                              Temp_int_Loop_Counter_Variable_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTalentArchetypesRowHandle  K2Node_CustomEvent_Archetype                                     (NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UTalentModelInterface_Const* CallFunc_GetModel_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FTalentArchetypesRowHandle>CallFunc_GetArchetypes_ReturnValue                               (ConstParm, ReferenceParm)
// class UTalentModelInterface*       K2Node_Event_InModel                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTalentViewInterface*        K2Node_Event_InView                                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Find_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMG_ButtonBase_C*           K2Node_ComponentBoundEvent_Button                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class ITalentControllerInterface>CallFunc_GetController_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper)
// int32                              Temp_int_Array_Index_Variable_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMG_TalentArchetype_Player_C*CallFunc_Array_Get_Item_1                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTalentsRowHandle           K2Node_CustomEvent_Talent                                        (NoDestructor, HasGetValueTypeHash)
// TArray<struct FTalentsRowHandle>   K2Node_CustomEvent_ProspectTalentRowHandles                      (ConstParm, ReferenceParm)
// struct FProspectInfo               CallFunc_Map_Find_Value                                          (None)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTalentsRowHandle           CallFunc_Array_Get_Item_2                                        (NoDestructor, HasGetValueTypeHash)
// struct FTalent                     CallFunc_GetTalentsStruct_Talents                                (None)
// enum class EValid                  CallFunc_GetTalentsStruct_Paths                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFProspectServerInfo        K2Node_MakeStruct_FProspectServerInfo                            (HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EValid                  CallFunc_CastToOutpostsRowHandle_Paths                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FOutpostsRowHandle          CallFunc_CastToOutpostsRowHandle_ReturnValue                     (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FOutpost                    CallFunc_GetOutpostsStruct_Outposts                              (None)
// enum class EValid                  CallFunc_GetOutpostsStruct_Paths                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_CanAddTalent_CanAddTalent                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Conv_NameToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// struct FTalentsRowHandle           CallFunc_Map_Find_Value_1                                        (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class FString>              CallFunc_Map_Keys_Keys                                           (ReferenceParm)
// struct FReqGenerateProspects       K2Node_MakeStruct_ReqGenerateProspects                           (None)
// class UGenerateProspectsCallbackProxyGen*CallFunc_GenerateProspects_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_TalentView_Outpost_C::ExecuteUbergraph_UMG_TalentView_Outpost(int32 EntryPoint, const struct FResGenerateProspects& K2Node_CustomEvent_Response, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FResGenerateProspects& Temp_struct_Variable, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Array_Length_ReturnValue, const struct FProspectInfo& CallFunc_Array_Get_Item, int32 Temp_int_Loop_Counter_Variable, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, const struct FResGenerateProspects& K2Node_CustomEvent_Response_1, int32 Temp_int_Loop_Counter_Variable_2, int32 CallFunc_Add_IntInt_ReturnValue_2, int32 Temp_int_Array_Index_Variable_1, const struct FTalentArchetypesRowHandle& K2Node_CustomEvent_Archetype, int32 CallFunc_Array_Length_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool CallFunc_Less_IntInt_ReturnValue_1, class UTalentModelInterface_Const* CallFunc_GetModel_ReturnValue, TArray<struct FTalentArchetypesRowHandle>& CallFunc_GetArchetypes_ReturnValue, class UTalentModelInterface* K2Node_Event_InModel, class UTalentViewInterface* K2Node_Event_InView, int32 CallFunc_Array_Find_ReturnValue, class UUMG_ButtonBase_C* K2Node_ComponentBoundEvent_Button, TScriptInterface<class ITalentControllerInterface> CallFunc_GetController_ReturnValue, int32 Temp_int_Array_Index_Variable_2, class UUMG_TalentArchetype_Player_C* CallFunc_Array_Get_Item_1, bool CallFunc_EqualEqual_IntInt_ReturnValue, const struct FTalentsRowHandle& K2Node_CustomEvent_Talent, TArray<struct FTalentsRowHandle>& K2Node_CustomEvent_ProspectTalentRowHandles, const struct FProspectInfo& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, const struct FTalentsRowHandle& CallFunc_Array_Get_Item_2, const struct FTalent& CallFunc_GetTalentsStruct_Talents, enum class EValid CallFunc_GetTalentsStruct_Paths, const struct FFProspectServerInfo& K2Node_MakeStruct_FProspectServerInfo, bool K2Node_SwitchEnum_CmpSuccess, int32 CallFunc_Array_Length_ReturnValue_2, enum class EValid CallFunc_CastToOutpostsRowHandle_Paths, const struct FOutpostsRowHandle& CallFunc_CastToOutpostsRowHandle_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_2, const struct FOutpost& CallFunc_GetOutpostsStruct_Outposts, enum class EValid CallFunc_GetOutpostsStruct_Paths, bool K2Node_SwitchEnum_CmpSuccess_1, bool K2Node_SwitchEnum_CmpSuccess_2, bool CallFunc_CanAddTalent_CanAddTalent, const class FString& CallFunc_Conv_NameToString_ReturnValue, const struct FTalentsRowHandle& CallFunc_Map_Find_Value_1, bool CallFunc_Map_Find_ReturnValue_1, TArray<class FString>& CallFunc_Map_Keys_Keys, const struct FReqGenerateProspects& K2Node_MakeStruct_ReqGenerateProspects, class UGenerateProspectsCallbackProxyGen* CallFunc_GenerateProspects_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_TalentView_Outpost_C", "ExecuteUbergraph_UMG_TalentView_Outpost");

	Params::UUMG_TalentView_Outpost_C_ExecuteUbergraph_UMG_TalentView_Outpost_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_Response = K2Node_CustomEvent_Response;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.K2Node_CustomEvent_Response_1 = K2Node_CustomEvent_Response_1;
	Parms.Temp_int_Loop_Counter_Variable_2 = Temp_int_Loop_Counter_Variable_2;
	Parms.CallFunc_Add_IntInt_ReturnValue_2 = CallFunc_Add_IntInt_ReturnValue_2;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.K2Node_CustomEvent_Archetype = K2Node_CustomEvent_Archetype;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_GetModel_ReturnValue = CallFunc_GetModel_ReturnValue;
	Parms.CallFunc_GetArchetypes_ReturnValue = CallFunc_GetArchetypes_ReturnValue;
	Parms.K2Node_Event_InModel = K2Node_Event_InModel;
	Parms.K2Node_Event_InView = K2Node_Event_InView;
	Parms.CallFunc_Array_Find_ReturnValue = CallFunc_Array_Find_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;
	Parms.CallFunc_GetController_ReturnValue = CallFunc_GetController_ReturnValue;
	Parms.Temp_int_Array_Index_Variable_2 = Temp_int_Array_Index_Variable_2;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.K2Node_CustomEvent_Talent = K2Node_CustomEvent_Talent;
	Parms.K2Node_CustomEvent_ProspectTalentRowHandles = K2Node_CustomEvent_ProspectTalentRowHandles;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_GetTalentsStruct_Talents = CallFunc_GetTalentsStruct_Talents;
	Parms.CallFunc_GetTalentsStruct_Paths = CallFunc_GetTalentsStruct_Paths;
	Parms.K2Node_MakeStruct_FProspectServerInfo = K2Node_MakeStruct_FProspectServerInfo;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_Array_Length_ReturnValue_2 = CallFunc_Array_Length_ReturnValue_2;
	Parms.CallFunc_CastToOutpostsRowHandle_Paths = CallFunc_CastToOutpostsRowHandle_Paths;
	Parms.CallFunc_CastToOutpostsRowHandle_ReturnValue = CallFunc_CastToOutpostsRowHandle_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue_2 = CallFunc_Less_IntInt_ReturnValue_2;
	Parms.CallFunc_GetOutpostsStruct_Outposts = CallFunc_GetOutpostsStruct_Outposts;
	Parms.CallFunc_GetOutpostsStruct_Paths = CallFunc_GetOutpostsStruct_Paths;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.K2Node_SwitchEnum_CmpSuccess_2 = K2Node_SwitchEnum_CmpSuccess_2;
	Parms.CallFunc_CanAddTalent_CanAddTalent = CallFunc_CanAddTalent_CanAddTalent;
	Parms.CallFunc_Conv_NameToString_ReturnValue = CallFunc_Conv_NameToString_ReturnValue;
	Parms.CallFunc_Map_Find_Value_1 = CallFunc_Map_Find_Value_1;
	Parms.CallFunc_Map_Find_ReturnValue_1 = CallFunc_Map_Find_ReturnValue_1;
	Parms.CallFunc_Map_Keys_Keys = CallFunc_Map_Keys_Keys;
	Parms.K2Node_MakeStruct_ReqGenerateProspects = K2Node_MakeStruct_ReqGenerateProspects;
	Parms.CallFunc_GenerateProspects_ReturnValue = CallFunc_GenerateProspects_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_TalentView_Outpost.UMG_TalentView_Outpost_C.ProspectListUpdated__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUMG_TalentView_Outpost_C::ProspectListUpdated__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_TalentView_Outpost_C", "ProspectListUpdated__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_TalentView_Outpost.UMG_TalentView_Outpost_C.ProspectSelected__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFProspectServerInfo        ProspectInfo                                                     (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void UUMG_TalentView_Outpost_C::ProspectSelected__DelegateSignature(const struct FFProspectServerInfo& ProspectInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_TalentView_Outpost_C", "ProspectSelected__DelegateSignature");

	Params::UUMG_TalentView_Outpost_C_ProspectSelected__DelegateSignature_Params Parms{};

	Parms.ProspectInfo = ProspectInfo;

	UObject::ProcessEvent(Func, &Parms);

}

}


