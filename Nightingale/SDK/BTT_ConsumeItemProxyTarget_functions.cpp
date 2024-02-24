#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BTT_ConsumeItemProxyTarget.BTT_ConsumeItemProxyTarget_C
// (None)

class UClass* UBTT_ConsumeItemProxyTarget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BTT_ConsumeItemProxyTarget_C");

	return Clss;
}


// BTT_ConsumeItemProxyTarget_C BTT_ConsumeItemProxyTarget.Default__BTT_ConsumeItemProxyTarget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBTT_ConsumeItemProxyTarget_C* UBTT_ConsumeItemProxyTarget_C::GetDefaultObj()
{
	static class UBTT_ConsumeItemProxyTarget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBTT_ConsumeItemProxyTarget_C*>(UBTT_ConsumeItemProxyTarget_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BTT_ConsumeItemProxyTarget.BTT_ConsumeItemProxyTarget_C.ReceiveExecuteAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController*               OwnerController                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APawn*                       ControlledPawn                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBTT_ConsumeItemProxyTarget_C::ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BTT_ConsumeItemProxyTarget_C", "ReceiveExecuteAI");

	Params::UBTT_ConsumeItemProxyTarget_C_ReceiveExecuteAI_Params Parms{};

	Parms.OwnerController = OwnerController;
	Parms.ControlledPawn = ControlledPawn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BTT_ConsumeItemProxyTarget.BTT_ConsumeItemProxyTarget_C.ExecuteUbergraph_BTT_ConsumeItemProxyTarget
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AAIController*               K2Node_Event_OwnerController                                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APawn*                       K2Node_Event_ControlledPawn                                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetBlackboardValueAsActor_ReturnValue                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBPI_EquippedItems_C>K2Node_DynamicCast_AsBPI_Equipped_Items                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ConsumeItemProxy_Success                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBTT_ConsumeItemProxyTarget_C::ExecuteUbergraph_BTT_ConsumeItemProxyTarget(int32 EntryPoint, class AAIController* K2Node_Event_OwnerController, class APawn* K2Node_Event_ControlledPawn, class AActor* CallFunc_GetBlackboardValueAsActor_ReturnValue, TScriptInterface<class IBPI_EquippedItems_C> K2Node_DynamicCast_AsBPI_Equipped_Items, bool K2Node_DynamicCast_bSuccess, bool CallFunc_ConsumeItemProxy_Success)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BTT_ConsumeItemProxyTarget_C", "ExecuteUbergraph_BTT_ConsumeItemProxyTarget");

	Params::UBTT_ConsumeItemProxyTarget_C_ExecuteUbergraph_BTT_ConsumeItemProxyTarget_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_OwnerController = K2Node_Event_OwnerController;
	Parms.K2Node_Event_ControlledPawn = K2Node_Event_ControlledPawn;
	Parms.CallFunc_GetBlackboardValueAsActor_ReturnValue = CallFunc_GetBlackboardValueAsActor_ReturnValue;
	Parms.K2Node_DynamicCast_AsBPI_Equipped_Items = K2Node_DynamicCast_AsBPI_Equipped_Items;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_ConsumeItemProxy_Success = CallFunc_ConsumeItemProxy_Success;

	UObject::ProcessEvent(Func, &Parms);

}

}


