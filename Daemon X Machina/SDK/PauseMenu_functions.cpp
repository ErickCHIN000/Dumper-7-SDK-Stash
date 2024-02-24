#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PauseMenu.PauseMenu_C
// (Actor)

class UClass* APauseMenu_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PauseMenu_C");

	return Clss;
}


// PauseMenu_C PauseMenu.Default__PauseMenu_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class APauseMenu_C* APauseMenu_C::GetDefaultObj()
{
	static class APauseMenu_C* Default = nullptr;

	if (!Default)
		Default = static_cast<APauseMenu_C*>(APauseMenu_C::StaticClass()->DefaultObject);

	return Default;
}


// Function PauseMenu.PauseMenu_C.FindLoadingScreen
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTransform                  CallFunc_MakeTransform_ReturnValue                               (IsPlainOldData, NoDestructor)
// TArray<class ALoadingScreen_C*>    CallFunc_GetAllActorsOfClass_OutActors                           (ZeroConstructor, ReferenceParm)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ALoadingScreen_C*            CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ALoadingScreen_C*            CallFunc_FinishSpawningActor_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)

void APauseMenu_C::FindLoadingScreen(const struct FTransform& CallFunc_MakeTransform_ReturnValue, TArray<class ALoadingScreen_C*>& CallFunc_GetAllActorsOfClass_OutActors, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class ALoadingScreen_C* CallFunc_Array_Get_Item, class ALoadingScreen_C* CallFunc_FinishSpawningActor_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PauseMenu_C", "FindLoadingScreen");

	Params::APauseMenu_C_FindLoadingScreen_Params Parms{};

	Parms.CallFunc_MakeTransform_ReturnValue = CallFunc_MakeTransform_ReturnValue;
	Parms.CallFunc_GetAllActorsOfClass_OutActors = CallFunc_GetAllActorsOfClass_OutActors;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_FinishSpawningActor_ReturnValue = CallFunc_FinishSpawningActor_ReturnValue;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PauseMenu.PauseMenu_C.DeleteYesNoPop
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void APauseMenu_C::DeleteYesNoPop(bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PauseMenu_C", "DeleteYesNoPop");

	Params::APauseMenu_C_DeleteYesNoPop_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PauseMenu.PauseMenu_C.CreateYesNoPop
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        CallFunc_FindTextInLocalizationTable_OutText                     (None)
// bool                               CallFunc_FindTextInLocalizationTable_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCmn_dialog_top00_C*         K2Node_DynamicCast_AsCmn_Dialog_Top_00                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue                               (IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AYesNoPopUp_C*               CallFunc_FinishSpawningActor_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void APauseMenu_C::CreateYesNoPop(class FText CallFunc_FindTextInLocalizationTable_OutText, bool CallFunc_FindTextInLocalizationTable_ReturnValue, class UCmn_dialog_top00_C* K2Node_DynamicCast_AsCmn_Dialog_Top_00, bool K2Node_DynamicCast_bSuccess, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class AYesNoPopUp_C* CallFunc_FinishSpawningActor_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PauseMenu_C", "CreateYesNoPop");

	Params::APauseMenu_C_CreateYesNoPop_Params Parms{};

	Parms.CallFunc_FindTextInLocalizationTable_OutText = CallFunc_FindTextInLocalizationTable_OutText;
	Parms.CallFunc_FindTextInLocalizationTable_ReturnValue = CallFunc_FindTextInLocalizationTable_ReturnValue;
	Parms.K2Node_DynamicCast_AsCmn_Dialog_Top_00 = K2Node_DynamicCast_AsCmn_Dialog_Top_00;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_MakeTransform_ReturnValue = CallFunc_MakeTransform_ReturnValue;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue;
	Parms.CallFunc_FinishSpawningActor_ReturnValue = CallFunc_FinishSpawningActor_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PauseMenu.PauseMenu_C.CreateWidget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMsn_pose_top00_C*           CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void APauseMenu_C::CreateWidget(class UMsn_pose_top00_C* CallFunc_Create_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PauseMenu_C", "CreateWidget");

	Params::APauseMenu_C_CreateWidget_Params Parms{};

	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PauseMenu.PauseMenu_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void APauseMenu_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PauseMenu_C", "UserConstructionScript");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PauseMenu.PauseMenu_C.OnLoaded_F1BE0EF8463188465D6805B69FC7C728
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                      Loaded                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void APauseMenu_C::OnLoaded_F1BE0EF8463188465D6805B69FC7C728(class UClass* Loaded)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PauseMenu_C", "OnLoaded_F1BE0EF8463188465D6805B69FC7C728");

	Params::APauseMenu_C_OnLoaded_F1BE0EF8463188465D6805B69FC7C728_Params Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PauseMenu.PauseMenu_C.OnLoaded_B83BBBA5457027325C84D7BF934D8FBA
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                      Loaded                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void APauseMenu_C::OnLoaded_B83BBBA5457027325C84D7BF934D8FBA(class UClass* Loaded)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PauseMenu_C", "OnLoaded_B83BBBA5457027325C84D7BF934D8FBA");

	Params::APauseMenu_C_OnLoaded_B83BBBA5457027325C84D7BF934D8FBA_Params Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PauseMenu.PauseMenu_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void APauseMenu_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PauseMenu_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PauseMenu.PauseMenu_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void APauseMenu_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PauseMenu_C", "ReceiveTick");

	Params::APauseMenu_C_ReceiveTick_Params Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PauseMenu.PauseMenu_C.CloseYesNoPopUpBP
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void APauseMenu_C::CloseYesNoPopUpBP()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PauseMenu_C", "CloseYesNoPopUpBP");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PauseMenu.PauseMenu_C.OpenYesNoPopBP
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void APauseMenu_C::OpenYesNoPopBP()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PauseMenu_C", "OpenYesNoPopBP");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PauseMenu.PauseMenu_C.OpenOptionMenuBP
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void APauseMenu_C::OpenOptionMenuBP()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PauseMenu_C", "OpenOptionMenuBP");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PauseMenu.PauseMenu_C.OpenManualUIBP
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void APauseMenu_C::OpenManualUIBP()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PauseMenu_C", "OpenManualUIBP");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PauseMenu.PauseMenu_C.OnClosed_«¹¿à¤ÙóÈ_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void APauseMenu_C::OnClosed__________1()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PauseMenu_C", "OnClosed_«¹¿à¤ÙóÈ_1");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PauseMenu.PauseMenu_C.ToTitleSceneBP
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void APauseMenu_C::ToTitleSceneBP()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PauseMenu_C", "ToTitleSceneBP");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PauseMenu.PauseMenu_C.OnOptionMenuActorExit_¤ÙóÈ_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void APauseMenu_C::OnOptionMenuActorExit______0()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PauseMenu_C", "OnOptionMenuActorExit_¤ÙóÈ_0");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PauseMenu.PauseMenu_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// enum class EEndPlayReason          EndPlayReason                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void APauseMenu_C::ReceiveEndPlay(enum class EEndPlayReason EndPlayReason)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PauseMenu_C", "ReceiveEndPlay");

	Params::APauseMenu_C_ReceiveEndPlay_Params Parms{};

	Parms.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PauseMenu.PauseMenu_C.ExecuteUbergraph_PauseMenu
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      K2Node_CustomEvent_Loaded1                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_StartLoading_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FMax_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      Temp_class_Variable                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      K2Node_ClassDynamicCast_AsTTLOption_Menu_Actor                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ClassDynamicCast_bSuccess                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UClass*                      K2Node_CustomEvent_Loaded                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      Temp_class_Variable1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      K2Node_ClassDynamicCast_AsTTLManual_Pop_Up                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ClassDynamicCast_bSuccess1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsRunningLoadingScreen_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Event_DeltaSeconds                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_ClosePopUp_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue                               (IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ATTLOptionMenuActor*         CallFunc_FinishSpawningActor_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Has_Been_Initd_Variable                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_IsClosed_Variable                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// enum class EEndPlayReason          K2Node_Event_EndPlayReason                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate1                            (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate2                            (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate3                            (ZeroConstructor, NoDestructor)
// bool                               CallFunc_SetGamePaused_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue1                              (IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue1           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ATTLManualPopUp*             CallFunc_FinishSpawningActor_ReturnValue1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_OpenPopUp_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void APauseMenu_C::ExecuteUbergraph_PauseMenu(int32 EntryPoint, class UClass* K2Node_CustomEvent_Loaded1, bool CallFunc_IsValid_ReturnValue, float CallFunc_StartLoading_ReturnValue, float CallFunc_FMax_ReturnValue, class UClass* Temp_class_Variable, class UClass* K2Node_ClassDynamicCast_AsTTLOption_Menu_Actor, bool K2Node_ClassDynamicCast_bSuccess, class UClass* K2Node_CustomEvent_Loaded, class UClass* Temp_class_Variable1, class UClass* K2Node_ClassDynamicCast_AsTTLManual_Pop_Up, bool K2Node_ClassDynamicCast_bSuccess1, bool CallFunc_IsValid_ReturnValue1, bool CallFunc_IsRunningLoadingScreen_ReturnValue, float K2Node_Event_DeltaSeconds, float CallFunc_ClosePopUp_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class ATTLOptionMenuActor* CallFunc_FinishSpawningActor_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable, bool CallFunc_IsValid_ReturnValue2, bool CallFunc_IsValid_ReturnValue3, bool Temp_bool_IsClosed_Variable, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, enum class EEndPlayReason K2Node_Event_EndPlayReason, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3, bool CallFunc_SetGamePaused_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue1, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue1, class ATTLManualPopUp* CallFunc_FinishSpawningActor_ReturnValue1, float CallFunc_OpenPopUp_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PauseMenu_C", "ExecuteUbergraph_PauseMenu");

	Params::APauseMenu_C_ExecuteUbergraph_PauseMenu_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_Loaded1 = K2Node_CustomEvent_Loaded1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_StartLoading_ReturnValue = CallFunc_StartLoading_ReturnValue;
	Parms.CallFunc_FMax_ReturnValue = CallFunc_FMax_ReturnValue;
	Parms.Temp_class_Variable = Temp_class_Variable;
	Parms.K2Node_ClassDynamicCast_AsTTLOption_Menu_Actor = K2Node_ClassDynamicCast_AsTTLOption_Menu_Actor;
	Parms.K2Node_ClassDynamicCast_bSuccess = K2Node_ClassDynamicCast_bSuccess;
	Parms.K2Node_CustomEvent_Loaded = K2Node_CustomEvent_Loaded;
	Parms.Temp_class_Variable1 = Temp_class_Variable1;
	Parms.K2Node_ClassDynamicCast_AsTTLManual_Pop_Up = K2Node_ClassDynamicCast_AsTTLManual_Pop_Up;
	Parms.K2Node_ClassDynamicCast_bSuccess1 = K2Node_ClassDynamicCast_bSuccess1;
	Parms.CallFunc_IsValid_ReturnValue1 = CallFunc_IsValid_ReturnValue1;
	Parms.CallFunc_IsRunningLoadingScreen_ReturnValue = CallFunc_IsRunningLoadingScreen_ReturnValue;
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;
	Parms.CallFunc_ClosePopUp_ReturnValue = CallFunc_ClosePopUp_ReturnValue;
	Parms.CallFunc_MakeTransform_ReturnValue = CallFunc_MakeTransform_ReturnValue;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue;
	Parms.CallFunc_FinishSpawningActor_ReturnValue = CallFunc_FinishSpawningActor_ReturnValue;
	Parms.Temp_bool_Has_Been_Initd_Variable = Temp_bool_Has_Been_Initd_Variable;
	Parms.CallFunc_IsValid_ReturnValue2 = CallFunc_IsValid_ReturnValue2;
	Parms.CallFunc_IsValid_ReturnValue3 = CallFunc_IsValid_ReturnValue3;
	Parms.Temp_bool_IsClosed_Variable = Temp_bool_IsClosed_Variable;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_Event_EndPlayReason = K2Node_Event_EndPlayReason;
	Parms.K2Node_CreateDelegate_OutputDelegate1 = K2Node_CreateDelegate_OutputDelegate1;
	Parms.K2Node_CreateDelegate_OutputDelegate2 = K2Node_CreateDelegate_OutputDelegate2;
	Parms.K2Node_CreateDelegate_OutputDelegate3 = K2Node_CreateDelegate_OutputDelegate3;
	Parms.CallFunc_SetGamePaused_ReturnValue = CallFunc_SetGamePaused_ReturnValue;
	Parms.CallFunc_MakeTransform_ReturnValue1 = CallFunc_MakeTransform_ReturnValue1;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue1 = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue1;
	Parms.CallFunc_FinishSpawningActor_ReturnValue1 = CallFunc_FinishSpawningActor_ReturnValue1;
	Parms.CallFunc_OpenPopUp_ReturnValue = CallFunc_OpenPopUp_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


