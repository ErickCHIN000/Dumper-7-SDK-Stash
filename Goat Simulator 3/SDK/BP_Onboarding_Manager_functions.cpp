#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Onboarding_Manager.BP_Onboarding_Manager_C
// (Actor)

class UClass* ABP_Onboarding_Manager_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Onboarding_Manager_C");

	return Clss;
}


// BP_Onboarding_Manager_C BP_Onboarding_Manager.Default__BP_Onboarding_Manager_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Onboarding_Manager_C* ABP_Onboarding_Manager_C::GetDefaultObj()
{
	static class ABP_Onboarding_Manager_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Onboarding_Manager_C*>(ABP_Onboarding_Manager_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_Onboarding_Manager.BP_Onboarding_Manager_C.GetGrindingTutorialHandle
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FDataTableRowHandle         GrindingTutorialHandle                                           (Parm, OutParm, NoDestructor)
// bool                               CallFunc_IsMobilePlatform_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_Onboarding_Manager_C::GetGrindingTutorialHandle(struct FDataTableRowHandle* GrindingTutorialHandle, bool CallFunc_IsMobilePlatform_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Onboarding_Manager_C", "GetGrindingTutorialHandle");

	Params::ABP_Onboarding_Manager_C_GetGrindingTutorialHandle_Params Parms{};

	Parms.CallFunc_IsMobilePlatform_ReturnValue = CallFunc_IsMobilePlatform_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (GrindingTutorialHandle != nullptr)
		*GrindingTutorialHandle = std::move(Parms.GrindingTutorialHandle);

}


// Function BP_Onboarding_Manager.BP_Onboarding_Manager_C.CheckIfPlayerIsNearALadder
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Onboarding_Manager_C::CheckIfPlayerIsNearALadder()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Onboarding_Manager_C", "CheckIfPlayerIsNearALadder");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Onboarding_Manager.BP_Onboarding_Manager_C.CheckIfPlayerIsGrinding
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Onboarding_Manager_C::CheckIfPlayerIsGrinding()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Onboarding_Manager_C", "CheckIfPlayerIsGrinding");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Onboarding_Manager.BP_Onboarding_Manager_C.CheckIfPlayerIsNearAGrindspline
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Onboarding_Manager_C::CheckIfPlayerIsNearAGrindspline()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Onboarding_Manager_C", "CheckIfPlayerIsNearAGrindspline");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Onboarding_Manager.BP_Onboarding_Manager_C.CheckIfPlayerIsClimbingLadder
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Onboarding_Manager_C::CheckIfPlayerIsClimbingLadder()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Onboarding_Manager_C", "CheckIfPlayerIsClimbingLadder");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Onboarding_Manager.BP_Onboarding_Manager_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Onboarding_Manager_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Onboarding_Manager_C", "ReceiveTick");

	Params::ABP_Onboarding_Manager_C_ReceiveTick_Params Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Onboarding_Manager.BP_Onboarding_Manager_C.OnTutorialActivated
// (Event, Public, BlueprintEvent)
// Parameters:
// class AGGPlayerController*         PC                                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGGGoat*                     Goat                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Onboarding_Manager_C::OnTutorialActivated(class AGGPlayerController* PC, class AGGGoat* Goat)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Onboarding_Manager_C", "OnTutorialActivated");

	Params::ABP_Onboarding_Manager_C_OnTutorialActivated_Params Parms{};

	Parms.PC = PC;
	Parms.Goat = Goat;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Onboarding_Manager.BP_Onboarding_Manager_C.CreateMapTutorial
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Onboarding_Manager_C::CreateMapTutorial()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Onboarding_Manager_C", "CreateMapTutorial");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Onboarding_Manager.BP_Onboarding_Manager_C.BindGoatTowersSynch
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Onboarding_Manager_C::BindGoatTowersSynch()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Onboarding_Manager_C", "BindGoatTowersSynch");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Onboarding_Manager.BP_Onboarding_Manager_C.GoatTowerSynched
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AGGGoat*                     Goat                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Onboarding_Manager_C::GoatTowerSynched(class AGGGoat* Goat)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Onboarding_Manager_C", "GoatTowerSynched");

	Params::ABP_Onboarding_Manager_C_GoatTowerSynched_Params Parms{};

	Parms.Goat = Goat;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Onboarding_Manager.BP_Onboarding_Manager_C.CreateFirstStep
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Onboarding_Manager_C::CreateFirstStep()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Onboarding_Manager_C", "CreateFirstStep");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Onboarding_Manager.BP_Onboarding_Manager_C.OnMoveCameraRemoved
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AGGTutorial*                 Tutorial                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Onboarding_Manager_C::OnMoveCameraRemoved(class AGGTutorial* Tutorial)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Onboarding_Manager_C", "OnMoveCameraRemoved");

	Params::ABP_Onboarding_Manager_C_OnMoveCameraRemoved_Params Parms{};

	Parms.Tutorial = Tutorial;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Onboarding_Manager.BP_Onboarding_Manager_C.OnMovementTutorial2Removed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AGGTutorial*                 Tutorial                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Onboarding_Manager_C::OnMovementTutorial2Removed(class AGGTutorial* Tutorial)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Onboarding_Manager_C", "OnMovementTutorial2Removed");

	Params::ABP_Onboarding_Manager_C_OnMovementTutorial2Removed_Params Parms{};

	Parms.Tutorial = Tutorial;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Onboarding_Manager.BP_Onboarding_Manager_C.OnIntroTutorialRemoved
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AGGTutorial*                 Tutorial                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Onboarding_Manager_C::OnIntroTutorialRemoved(class AGGTutorial* Tutorial)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Onboarding_Manager_C", "OnIntroTutorialRemoved");

	Params::ABP_Onboarding_Manager_C_OnIntroTutorialRemoved_Params Parms{};

	Parms.Tutorial = Tutorial;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Onboarding_Manager.BP_Onboarding_Manager_C.CreateWallrunningTutorial
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Onboarding_Manager_C::CreateWallrunningTutorial()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Onboarding_Manager_C", "CreateWallrunningTutorial");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Onboarding_Manager.BP_Onboarding_Manager_C.CreateMovementTutorial2
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Onboarding_Manager_C::CreateMovementTutorial2()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Onboarding_Manager_C", "CreateMovementTutorial2");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Onboarding_Manager.BP_Onboarding_Manager_C.CreateHeadbuttTutorial
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Onboarding_Manager_C::CreateHeadbuttTutorial()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Onboarding_Manager_C", "CreateHeadbuttTutorial");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Onboarding_Manager.BP_Onboarding_Manager_C.CreateLickTutorial
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Onboarding_Manager_C::CreateLickTutorial()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Onboarding_Manager_C", "CreateLickTutorial");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Onboarding_Manager.BP_Onboarding_Manager_C.CreateBasicMechanics2Tutorial
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Onboarding_Manager_C::CreateBasicMechanics2Tutorial()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Onboarding_Manager_C", "CreateBasicMechanics2Tutorial");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Onboarding_Manager.BP_Onboarding_Manager_C.OnHeadbuttTutorialRemoved
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AGGTutorial*                 Tutorial                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Onboarding_Manager_C::OnHeadbuttTutorialRemoved(class AGGTutorial* Tutorial)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Onboarding_Manager_C", "OnHeadbuttTutorialRemoved");

	Params::ABP_Onboarding_Manager_C_OnHeadbuttTutorialRemoved_Params Parms{};

	Parms.Tutorial = Tutorial;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Onboarding_Manager.BP_Onboarding_Manager_C.OnLIckTutorialRemoved
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AGGTutorial*                 Tutorial                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Onboarding_Manager_C::OnLIckTutorialRemoved(class AGGTutorial* Tutorial)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Onboarding_Manager_C", "OnLIckTutorialRemoved");

	Params::ABP_Onboarding_Manager_C_OnLIckTutorialRemoved_Params Parms{};

	Parms.Tutorial = Tutorial;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Onboarding_Manager.BP_Onboarding_Manager_C.OnCreateBasicMechanics2
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AGGTutorial*                 Tutorial                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Onboarding_Manager_C::OnCreateBasicMechanics2(class AGGTutorial* Tutorial)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Onboarding_Manager_C", "OnCreateBasicMechanics2");

	Params::ABP_Onboarding_Manager_C_OnCreateBasicMechanics2_Params Parms{};

	Parms.Tutorial = Tutorial;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Onboarding_Manager.BP_Onboarding_Manager_C.CreateFirstStepMobile
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Onboarding_Manager_C::CreateFirstStepMobile()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Onboarding_Manager_C", "CreateFirstStepMobile");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Onboarding_Manager.BP_Onboarding_Manager_C.OnMobileJumpTutorialRemoved
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AGGTutorial*                 Tutorial                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Onboarding_Manager_C::OnMobileJumpTutorialRemoved(class AGGTutorial* Tutorial)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Onboarding_Manager_C", "OnMobileJumpTutorialRemoved");

	Params::ABP_Onboarding_Manager_C_OnMobileJumpTutorialRemoved_Params Parms{};

	Parms.Tutorial = Tutorial;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Onboarding_Manager.BP_Onboarding_Manager_C.CreateMobileHeadbuttTutorial
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Onboarding_Manager_C::CreateMobileHeadbuttTutorial()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Onboarding_Manager_C", "CreateMobileHeadbuttTutorial");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Onboarding_Manager.BP_Onboarding_Manager_C.OnMobileHeadbuttTutorialRemoved
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AGGTutorial*                 Tutorial                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Onboarding_Manager_C::OnMobileHeadbuttTutorialRemoved(class AGGTutorial* Tutorial)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Onboarding_Manager_C", "OnMobileHeadbuttTutorialRemoved");

	Params::ABP_Onboarding_Manager_C_OnMobileHeadbuttTutorialRemoved_Params Parms{};

	Parms.Tutorial = Tutorial;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Onboarding_Manager.BP_Onboarding_Manager_C.CreateMobileLickTutorial
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Onboarding_Manager_C::CreateMobileLickTutorial()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Onboarding_Manager_C", "CreateMobileLickTutorial");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Onboarding_Manager.BP_Onboarding_Manager_C.OnMobileLickTutorialRemoved
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AGGTutorial*                 Tutorial                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Onboarding_Manager_C::OnMobileLickTutorialRemoved(class AGGTutorial* Tutorial)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Onboarding_Manager_C", "OnMobileLickTutorialRemoved");

	Params::ABP_Onboarding_Manager_C_OnMobileLickTutorialRemoved_Params Parms{};

	Parms.Tutorial = Tutorial;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Onboarding_Manager.BP_Onboarding_Manager_C.CreateMobileBaaTutorial
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Onboarding_Manager_C::CreateMobileBaaTutorial()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Onboarding_Manager_C", "CreateMobileBaaTutorial");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Onboarding_Manager.BP_Onboarding_Manager_C.ExecuteUbergraph_BP_Onboarding_Manager
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor)
// TArray<enum class EObjectTypeQuery>K2Node_MakeArray_Array                                           (ConstParm, ReferenceParm)
// TArray<enum class EObjectTypeQuery>K2Node_MakeArray_Array_1                                         (ConstParm, ReferenceParm)
// float                              K2Node_Event_DeltaSeconds                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor)
// class AGGPlayerController*         K2Node_Event_PC                                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGGGoat*                     K2Node_Event_Goat                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_5                           (ZeroConstructor, NoDestructor)
// TArray<class ABP_GoatTower_C*>     CallFunc_GetAllActorsOfClass_OutActors                           (ReferenceParm)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_6                           (ZeroConstructor, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGGGoat*                     K2Node_CustomEvent_Goat                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGGPlayerController*         CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGGGoat*                     CallFunc_GetControlledGoat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGGPlayerController*         CallFunc_GetOwningPlayer_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGGGoat*                     CallFunc_GetControlledGoat_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGGPlayerController*         CallFunc_GetOwningPlayer_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGGGoat*                     CallFunc_GetControlledGoat_ReturnValue_2                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsClimbingLadder_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGGPlayerController*         CallFunc_GetOwningPlayer_ReturnValue_3                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGGGoat*                     CallFunc_GetControlledGoat_ReturnValue_3                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGGPlayerController*         CallFunc_GetOwningPlayer_ReturnValue_4                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGGGoat*                     CallFunc_GetControlledGoat_ReturnValue_4                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsGrinding_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class AActor*>              Temp_object_Variable                                             (ConstParm, ReferenceParm)
// TArray<class AActor*>              Temp_object_Variable_1                                           (ConstParm, ReferenceParm)
// TArray<class AActor*>              CallFunc_SphereOverlapActors_OutActors                           (ReferenceParm)
// bool                               CallFunc_SphereOverlapActors_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class AActor*>              CallFunc_SphereOverlapActors_OutActors_1                         (ReferenceParm)
// bool                               CallFunc_SphereOverlapActors_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_IntInt_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_7                           (ZeroConstructor, NoDestructor)
// class AGGTutorial*                 K2Node_CustomEvent_Tutorial_8                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGGPlayerController*         CallFunc_GetOwningPlayer_ReturnValue_5                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGGPlayerController*         CallFunc_GetOwningPlayer_ReturnValue_6                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGGTutorial*                 K2Node_CustomEvent_Tutorial_7                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGGPlayerController*         CallFunc_GetOwningPlayer_ReturnValue_7                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGGTutorial*                 K2Node_CustomEvent_Tutorial_6                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_GoatTower_C*             CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGGPlayerController*         CallFunc_GetOwningPlayer_ReturnValue_8                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGGTutorial*                 K2Node_CustomEvent_Tutorial_5                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGGPlayerController*         CallFunc_GetOwningPlayer_ReturnValue_9                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGGTutorial*                 K2Node_CustomEvent_Tutorial_4                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGGPlayerController*         CallFunc_GetOwningPlayer_ReturnValue_10                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGGTutorial*                 K2Node_CustomEvent_Tutorial_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGGTutorial*                 CallFunc_CreateTutorial_OutCreatedTutorial                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CreateTutorial_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AGGTutorial*                 CallFunc_CreateTutorial_OutCreatedTutorial_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CreateTutorial_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AGGTutorial*                 CallFunc_CreateTutorial_OutCreatedTutorial_2                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CreateTutorial_ReturnValue_2                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AGGTutorial*                 CallFunc_CreateTutorial_OutCreatedTutorial_3                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CreateTutorial_ReturnValue_3                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_RemoveTutorial_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_RemoveTutorial_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AGGTutorial*                 CallFunc_CreateTutorial_OutCreatedTutorial_4                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CreateTutorial_ReturnValue_4                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AGGTutorial*                 CallFunc_CreateTutorial_OutCreatedTutorial_5                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CreateTutorial_ReturnValue_5                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AGGTutorial*                 CallFunc_CreateTutorial_OutCreatedTutorial_6                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CreateTutorial_ReturnValue_6                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FDataTableRowHandle         CallFunc_GetGrindingTutorialHandle_GrindingTutorialHandle        (NoDestructor)
// class AGGTutorial*                 CallFunc_CreateTutorial_OutCreatedTutorial_7                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CreateTutorial_ReturnValue_7                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_RemoveTutorial_ReturnValue_2                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FDataTableRowHandle         CallFunc_GetGrindingTutorialHandle_GrindingTutorialHandle_1      (NoDestructor)
// bool                               CallFunc_IsMobilePlatform_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_RemoveTutorial_ReturnValue_3                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AGGTutorial*                 CallFunc_CreateTutorial_OutCreatedTutorial_8                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CreateTutorial_ReturnValue_8                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AGGPlayerController*         CallFunc_GetOwningPlayer_ReturnValue_11                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGGTutorial*                 K2Node_CustomEvent_Tutorial_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGGTutorial*                 CallFunc_CreateTutorial_OutCreatedTutorial_9                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CreateTutorial_ReturnValue_9                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_8                           (ZeroConstructor, NoDestructor)
// class AGGPlayerController*         CallFunc_GetOwningPlayer_ReturnValue_12                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGGTutorial*                 K2Node_CustomEvent_Tutorial_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGGTutorial*                 CallFunc_CreateTutorial_OutCreatedTutorial_10                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CreateTutorial_ReturnValue_10                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_9                           (ZeroConstructor, NoDestructor)
// class AGGPlayerController*         CallFunc_GetOwningPlayer_ReturnValue_13                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGGTutorial*                 K2Node_CustomEvent_Tutorial                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGGTutorial*                 CallFunc_CreateTutorial_OutCreatedTutorial_11                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CreateTutorial_ReturnValue_11                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AGGPlayerController*         CallFunc_GetOwningPlayer_ReturnValue_14                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGGTutorial*                 CallFunc_CreateTutorial_OutCreatedTutorial_12                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CreateTutorial_ReturnValue_12                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Onboarding_Manager_C::ExecuteUbergraph_BP_Onboarding_Manager(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, TArray<enum class EObjectTypeQuery>& K2Node_MakeArray_Array, TArray<enum class EObjectTypeQuery>& K2Node_MakeArray_Array_1, float K2Node_Event_DeltaSeconds, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, class AGGPlayerController* K2Node_Event_PC, class AGGGoat* K2Node_Event_Goat, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, TArray<class ABP_GoatTower_C*>& CallFunc_GetAllActorsOfClass_OutActors, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, int32 CallFunc_Array_Length_ReturnValue, class AGGGoat* K2Node_CustomEvent_Goat, class AGGPlayerController* CallFunc_GetOwningPlayer_ReturnValue, class AGGGoat* CallFunc_GetControlledGoat_ReturnValue, class AGGPlayerController* CallFunc_GetOwningPlayer_ReturnValue_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class AGGGoat* CallFunc_GetControlledGoat_ReturnValue_1, class AGGPlayerController* CallFunc_GetOwningPlayer_ReturnValue_2, class AGGGoat* CallFunc_GetControlledGoat_ReturnValue_2, bool CallFunc_IsClimbingLadder_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, class AGGPlayerController* CallFunc_GetOwningPlayer_ReturnValue_3, class AGGGoat* CallFunc_GetControlledGoat_ReturnValue_3, class AGGPlayerController* CallFunc_GetOwningPlayer_ReturnValue_4, class AGGGoat* CallFunc_GetControlledGoat_ReturnValue_4, bool CallFunc_IsGrinding_ReturnValue, bool CallFunc_IsValid_ReturnValue, TArray<class AActor*>& Temp_object_Variable, TArray<class AActor*>& Temp_object_Variable_1, TArray<class AActor*>& CallFunc_SphereOverlapActors_OutActors, bool CallFunc_SphereOverlapActors_ReturnValue, TArray<class AActor*>& CallFunc_SphereOverlapActors_OutActors_1, bool CallFunc_SphereOverlapActors_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, class AGGTutorial* K2Node_CustomEvent_Tutorial_8, class AGGPlayerController* CallFunc_GetOwningPlayer_ReturnValue_5, class AGGPlayerController* CallFunc_GetOwningPlayer_ReturnValue_6, class AGGTutorial* K2Node_CustomEvent_Tutorial_7, class AGGPlayerController* CallFunc_GetOwningPlayer_ReturnValue_7, class AGGTutorial* K2Node_CustomEvent_Tutorial_6, int32 Temp_int_Array_Index_Variable, class ABP_GoatTower_C* CallFunc_Array_Get_Item, class AGGPlayerController* CallFunc_GetOwningPlayer_ReturnValue_8, class AGGTutorial* K2Node_CustomEvent_Tutorial_5, class AGGPlayerController* CallFunc_GetOwningPlayer_ReturnValue_9, class AGGTutorial* K2Node_CustomEvent_Tutorial_4, class AGGPlayerController* CallFunc_GetOwningPlayer_ReturnValue_10, class AGGTutorial* K2Node_CustomEvent_Tutorial_3, class AGGTutorial* CallFunc_CreateTutorial_OutCreatedTutorial, bool CallFunc_CreateTutorial_ReturnValue, class AGGTutorial* CallFunc_CreateTutorial_OutCreatedTutorial_1, bool CallFunc_CreateTutorial_ReturnValue_1, class AGGTutorial* CallFunc_CreateTutorial_OutCreatedTutorial_2, bool CallFunc_CreateTutorial_ReturnValue_2, class AGGTutorial* CallFunc_CreateTutorial_OutCreatedTutorial_3, bool CallFunc_CreateTutorial_ReturnValue_3, bool CallFunc_RemoveTutorial_ReturnValue, bool CallFunc_RemoveTutorial_ReturnValue_1, class AGGTutorial* CallFunc_CreateTutorial_OutCreatedTutorial_4, bool CallFunc_CreateTutorial_ReturnValue_4, class AGGTutorial* CallFunc_CreateTutorial_OutCreatedTutorial_5, bool CallFunc_CreateTutorial_ReturnValue_5, class AGGTutorial* CallFunc_CreateTutorial_OutCreatedTutorial_6, bool CallFunc_CreateTutorial_ReturnValue_6, const struct FDataTableRowHandle& CallFunc_GetGrindingTutorialHandle_GrindingTutorialHandle, class AGGTutorial* CallFunc_CreateTutorial_OutCreatedTutorial_7, bool CallFunc_CreateTutorial_ReturnValue_7, bool CallFunc_RemoveTutorial_ReturnValue_2, const struct FDataTableRowHandle& CallFunc_GetGrindingTutorialHandle_GrindingTutorialHandle_1, bool CallFunc_IsMobilePlatform_ReturnValue, bool CallFunc_RemoveTutorial_ReturnValue_3, class AGGTutorial* CallFunc_CreateTutorial_OutCreatedTutorial_8, bool CallFunc_CreateTutorial_ReturnValue_8, class AGGPlayerController* CallFunc_GetOwningPlayer_ReturnValue_11, class AGGTutorial* K2Node_CustomEvent_Tutorial_2, class AGGTutorial* CallFunc_CreateTutorial_OutCreatedTutorial_9, bool CallFunc_CreateTutorial_ReturnValue_9, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_8, class AGGPlayerController* CallFunc_GetOwningPlayer_ReturnValue_12, class AGGTutorial* K2Node_CustomEvent_Tutorial_1, class AGGTutorial* CallFunc_CreateTutorial_OutCreatedTutorial_10, bool CallFunc_CreateTutorial_ReturnValue_10, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_9, class AGGPlayerController* CallFunc_GetOwningPlayer_ReturnValue_13, class AGGTutorial* K2Node_CustomEvent_Tutorial, class AGGTutorial* CallFunc_CreateTutorial_OutCreatedTutorial_11, bool CallFunc_CreateTutorial_ReturnValue_11, class AGGPlayerController* CallFunc_GetOwningPlayer_ReturnValue_14, class AGGTutorial* CallFunc_CreateTutorial_OutCreatedTutorial_12, bool CallFunc_CreateTutorial_ReturnValue_12, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Onboarding_Manager_C", "ExecuteUbergraph_BP_Onboarding_Manager");

	Params::ABP_Onboarding_Manager_C_ExecuteUbergraph_BP_Onboarding_Manager_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.K2Node_Event_PC = K2Node_Event_PC;
	Parms.K2Node_Event_Goat = K2Node_Event_Goat;
	Parms.K2Node_CreateDelegate_OutputDelegate_5 = K2Node_CreateDelegate_OutputDelegate_5;
	Parms.CallFunc_GetAllActorsOfClass_OutActors = CallFunc_GetAllActorsOfClass_OutActors;
	Parms.K2Node_CreateDelegate_OutputDelegate_6 = K2Node_CreateDelegate_OutputDelegate_6;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.K2Node_CustomEvent_Goat = K2Node_CustomEvent_Goat;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_GetControlledGoat_ReturnValue = CallFunc_GetControlledGoat_ReturnValue;
	Parms.CallFunc_GetOwningPlayer_ReturnValue_1 = CallFunc_GetOwningPlayer_ReturnValue_1;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_GetControlledGoat_ReturnValue_1 = CallFunc_GetControlledGoat_ReturnValue_1;
	Parms.CallFunc_GetOwningPlayer_ReturnValue_2 = CallFunc_GetOwningPlayer_ReturnValue_2;
	Parms.CallFunc_GetControlledGoat_ReturnValue_2 = CallFunc_GetControlledGoat_ReturnValue_2;
	Parms.CallFunc_IsClimbingLadder_ReturnValue = CallFunc_IsClimbingLadder_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue_1 = CallFunc_K2_GetActorLocation_ReturnValue_1;
	Parms.CallFunc_GetOwningPlayer_ReturnValue_3 = CallFunc_GetOwningPlayer_ReturnValue_3;
	Parms.CallFunc_GetControlledGoat_ReturnValue_3 = CallFunc_GetControlledGoat_ReturnValue_3;
	Parms.CallFunc_GetOwningPlayer_ReturnValue_4 = CallFunc_GetOwningPlayer_ReturnValue_4;
	Parms.CallFunc_GetControlledGoat_ReturnValue_4 = CallFunc_GetControlledGoat_ReturnValue_4;
	Parms.CallFunc_IsGrinding_ReturnValue = CallFunc_IsGrinding_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.Temp_object_Variable_1 = Temp_object_Variable_1;
	Parms.CallFunc_SphereOverlapActors_OutActors = CallFunc_SphereOverlapActors_OutActors;
	Parms.CallFunc_SphereOverlapActors_ReturnValue = CallFunc_SphereOverlapActors_ReturnValue;
	Parms.CallFunc_SphereOverlapActors_OutActors_1 = CallFunc_SphereOverlapActors_OutActors_1;
	Parms.CallFunc_SphereOverlapActors_ReturnValue_1 = CallFunc_SphereOverlapActors_ReturnValue_1;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Array_Length_ReturnValue_2 = CallFunc_Array_Length_ReturnValue_2;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue_1 = CallFunc_Greater_IntInt_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_7 = K2Node_CreateDelegate_OutputDelegate_7;
	Parms.K2Node_CustomEvent_Tutorial_8 = K2Node_CustomEvent_Tutorial_8;
	Parms.CallFunc_GetOwningPlayer_ReturnValue_5 = CallFunc_GetOwningPlayer_ReturnValue_5;
	Parms.CallFunc_GetOwningPlayer_ReturnValue_6 = CallFunc_GetOwningPlayer_ReturnValue_6;
	Parms.K2Node_CustomEvent_Tutorial_7 = K2Node_CustomEvent_Tutorial_7;
	Parms.CallFunc_GetOwningPlayer_ReturnValue_7 = CallFunc_GetOwningPlayer_ReturnValue_7;
	Parms.K2Node_CustomEvent_Tutorial_6 = K2Node_CustomEvent_Tutorial_6;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_GetOwningPlayer_ReturnValue_8 = CallFunc_GetOwningPlayer_ReturnValue_8;
	Parms.K2Node_CustomEvent_Tutorial_5 = K2Node_CustomEvent_Tutorial_5;
	Parms.CallFunc_GetOwningPlayer_ReturnValue_9 = CallFunc_GetOwningPlayer_ReturnValue_9;
	Parms.K2Node_CustomEvent_Tutorial_4 = K2Node_CustomEvent_Tutorial_4;
	Parms.CallFunc_GetOwningPlayer_ReturnValue_10 = CallFunc_GetOwningPlayer_ReturnValue_10;
	Parms.K2Node_CustomEvent_Tutorial_3 = K2Node_CustomEvent_Tutorial_3;
	Parms.CallFunc_CreateTutorial_OutCreatedTutorial = CallFunc_CreateTutorial_OutCreatedTutorial;
	Parms.CallFunc_CreateTutorial_ReturnValue = CallFunc_CreateTutorial_ReturnValue;
	Parms.CallFunc_CreateTutorial_OutCreatedTutorial_1 = CallFunc_CreateTutorial_OutCreatedTutorial_1;
	Parms.CallFunc_CreateTutorial_ReturnValue_1 = CallFunc_CreateTutorial_ReturnValue_1;
	Parms.CallFunc_CreateTutorial_OutCreatedTutorial_2 = CallFunc_CreateTutorial_OutCreatedTutorial_2;
	Parms.CallFunc_CreateTutorial_ReturnValue_2 = CallFunc_CreateTutorial_ReturnValue_2;
	Parms.CallFunc_CreateTutorial_OutCreatedTutorial_3 = CallFunc_CreateTutorial_OutCreatedTutorial_3;
	Parms.CallFunc_CreateTutorial_ReturnValue_3 = CallFunc_CreateTutorial_ReturnValue_3;
	Parms.CallFunc_RemoveTutorial_ReturnValue = CallFunc_RemoveTutorial_ReturnValue;
	Parms.CallFunc_RemoveTutorial_ReturnValue_1 = CallFunc_RemoveTutorial_ReturnValue_1;
	Parms.CallFunc_CreateTutorial_OutCreatedTutorial_4 = CallFunc_CreateTutorial_OutCreatedTutorial_4;
	Parms.CallFunc_CreateTutorial_ReturnValue_4 = CallFunc_CreateTutorial_ReturnValue_4;
	Parms.CallFunc_CreateTutorial_OutCreatedTutorial_5 = CallFunc_CreateTutorial_OutCreatedTutorial_5;
	Parms.CallFunc_CreateTutorial_ReturnValue_5 = CallFunc_CreateTutorial_ReturnValue_5;
	Parms.CallFunc_CreateTutorial_OutCreatedTutorial_6 = CallFunc_CreateTutorial_OutCreatedTutorial_6;
	Parms.CallFunc_CreateTutorial_ReturnValue_6 = CallFunc_CreateTutorial_ReturnValue_6;
	Parms.CallFunc_GetGrindingTutorialHandle_GrindingTutorialHandle = CallFunc_GetGrindingTutorialHandle_GrindingTutorialHandle;
	Parms.CallFunc_CreateTutorial_OutCreatedTutorial_7 = CallFunc_CreateTutorial_OutCreatedTutorial_7;
	Parms.CallFunc_CreateTutorial_ReturnValue_7 = CallFunc_CreateTutorial_ReturnValue_7;
	Parms.CallFunc_RemoveTutorial_ReturnValue_2 = CallFunc_RemoveTutorial_ReturnValue_2;
	Parms.CallFunc_GetGrindingTutorialHandle_GrindingTutorialHandle_1 = CallFunc_GetGrindingTutorialHandle_GrindingTutorialHandle_1;
	Parms.CallFunc_IsMobilePlatform_ReturnValue = CallFunc_IsMobilePlatform_ReturnValue;
	Parms.CallFunc_RemoveTutorial_ReturnValue_3 = CallFunc_RemoveTutorial_ReturnValue_3;
	Parms.CallFunc_CreateTutorial_OutCreatedTutorial_8 = CallFunc_CreateTutorial_OutCreatedTutorial_8;
	Parms.CallFunc_CreateTutorial_ReturnValue_8 = CallFunc_CreateTutorial_ReturnValue_8;
	Parms.CallFunc_GetOwningPlayer_ReturnValue_11 = CallFunc_GetOwningPlayer_ReturnValue_11;
	Parms.K2Node_CustomEvent_Tutorial_2 = K2Node_CustomEvent_Tutorial_2;
	Parms.CallFunc_CreateTutorial_OutCreatedTutorial_9 = CallFunc_CreateTutorial_OutCreatedTutorial_9;
	Parms.CallFunc_CreateTutorial_ReturnValue_9 = CallFunc_CreateTutorial_ReturnValue_9;
	Parms.K2Node_CreateDelegate_OutputDelegate_8 = K2Node_CreateDelegate_OutputDelegate_8;
	Parms.CallFunc_GetOwningPlayer_ReturnValue_12 = CallFunc_GetOwningPlayer_ReturnValue_12;
	Parms.K2Node_CustomEvent_Tutorial_1 = K2Node_CustomEvent_Tutorial_1;
	Parms.CallFunc_CreateTutorial_OutCreatedTutorial_10 = CallFunc_CreateTutorial_OutCreatedTutorial_10;
	Parms.CallFunc_CreateTutorial_ReturnValue_10 = CallFunc_CreateTutorial_ReturnValue_10;
	Parms.K2Node_CreateDelegate_OutputDelegate_9 = K2Node_CreateDelegate_OutputDelegate_9;
	Parms.CallFunc_GetOwningPlayer_ReturnValue_13 = CallFunc_GetOwningPlayer_ReturnValue_13;
	Parms.K2Node_CustomEvent_Tutorial = K2Node_CustomEvent_Tutorial;
	Parms.CallFunc_CreateTutorial_OutCreatedTutorial_11 = CallFunc_CreateTutorial_OutCreatedTutorial_11;
	Parms.CallFunc_CreateTutorial_ReturnValue_11 = CallFunc_CreateTutorial_ReturnValue_11;
	Parms.CallFunc_GetOwningPlayer_ReturnValue_14 = CallFunc_GetOwningPlayer_ReturnValue_14;
	Parms.CallFunc_CreateTutorial_OutCreatedTutorial_12 = CallFunc_CreateTutorial_OutCreatedTutorial_12;
	Parms.CallFunc_CreateTutorial_ReturnValue_12 = CallFunc_CreateTutorial_ReturnValue_12;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


