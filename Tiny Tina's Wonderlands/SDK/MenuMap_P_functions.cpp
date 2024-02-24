#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MenuMap_P.MenuMap_P_C
// (Actor)

class UClass* AMenuMap_P_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MenuMap_P_C");

	return Clss;
}


// MenuMap_P_C MenuMap_P.Default__MenuMap_P_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AMenuMap_P_C* AMenuMap_P_C::GetDefaultObj()
{
	static class AMenuMap_P_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AMenuMap_P_C*>(AMenuMap_P_C::StaticClass()->DefaultObject);

	return Default;
}


// Function MenuMap_P.MenuMap_P_C.FadeDownBlackScreen__FinishedFunc
// (BlueprintEvent)
// Parameters:

void AMenuMap_P_C::FadeDownBlackScreen__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuMap_P_C", "FadeDownBlackScreen__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MenuMap_P.MenuMap_P_C.FadeDownBlackScreen__UpdateFunc
// (BlueprintEvent)
// Parameters:

void AMenuMap_P_C::FadeDownBlackScreen__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuMap_P_C", "FadeDownBlackScreen__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MenuMap_P.MenuMap_P_C.BndEvt__MenuMapMenuFlow_1_K2Node_ActorBoundEvent_0_MenuMapMenuFlowDelegate__DelegateSignature
// (BlueprintEvent)
// Parameters:

void AMenuMap_P_C::BndEvt__MenuMapMenuFlow_1_K2Node_ActorBoundEvent_0_MenuMapMenuFlowDelegate__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuMap_P_C", "BndEvt__MenuMapMenuFlow_1_K2Node_ActorBoundEvent_0_MenuMapMenuFlowDelegate__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MenuMap_P.MenuMap_P_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AMenuMap_P_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuMap_P_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MenuMap_P.MenuMap_P_C.BndEvt__MenuMapMenuFlow_1_K2Node_ActorBoundEvent_1_MainMenuViewpointChangedDelegate__DelegateSignature
// (BlueprintEvent)
// Parameters:
// enum class EMainMenuViewpointType  MenuTransition                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AMenuMap_P_C::BndEvt__MenuMapMenuFlow_1_K2Node_ActorBoundEvent_1_MainMenuViewpointChangedDelegate__DelegateSignature(enum class EMainMenuViewpointType MenuTransition)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuMap_P_C", "BndEvt__MenuMapMenuFlow_1_K2Node_ActorBoundEvent_1_MainMenuViewpointChangedDelegate__DelegateSignature");

	Params::AMenuMap_P_C_BndEvt__MenuMapMenuFlow_1_K2Node_ActorBoundEvent_1_MainMenuViewpointChangedDelegate__DelegateSignature_Params Parms{};

	Parms.MenuTransition = MenuTransition;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MenuMap_P.MenuMap_P_C.ExecuteUbergraph_MenuMap_P
// (None)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EInitialPlayerStatus    CallFunc_Start_OutInitialPlayerStatus                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EMainMenuViewpointType  K2Node_ActorBoundEvent_MenuTransition                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum1_CmpSuccess                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void AMenuMap_P_C::ExecuteUbergraph_MenuMap_P(int32 EntryPoint, enum class EInitialPlayerStatus CallFunc_Start_OutInitialPlayerStatus, bool K2Node_SwitchEnum_CmpSuccess, enum class EMainMenuViewpointType K2Node_ActorBoundEvent_MenuTransition, bool K2Node_SwitchEnum1_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuMap_P_C", "ExecuteUbergraph_MenuMap_P");

	Params::AMenuMap_P_C_ExecuteUbergraph_MenuMap_P_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_Start_OutInitialPlayerStatus = CallFunc_Start_OutInitialPlayerStatus;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_ActorBoundEvent_MenuTransition = K2Node_ActorBoundEvent_MenuTransition;
	Parms.K2Node_SwitchEnum1_CmpSuccess = K2Node_SwitchEnum1_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}

}


