#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_EnhancedEditionLogo.UI_EnhancedEditionLogo_C
// (None)

class UClass* UUI_EnhancedEditionLogo_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_EnhancedEditionLogo_C");

	return Clss;
}


// UI_EnhancedEditionLogo_C UI_EnhancedEditionLogo.Default__UI_EnhancedEditionLogo_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_EnhancedEditionLogo_C* UUI_EnhancedEditionLogo_C::GetDefaultObj()
{
	static class UUI_EnhancedEditionLogo_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_EnhancedEditionLogo_C*>(UUI_EnhancedEditionLogo_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UI_EnhancedEditionLogo.UI_EnhancedEditionLogo_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUI_EnhancedEditionLogo_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_EnhancedEditionLogo_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_EnhancedEditionLogo.UI_EnhancedEditionLogo_C.ExecuteUbergraph_UI_EnhancedEditionLogo
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDHGameInstance*             K2Node_DynamicCast_AsDHGame_Instance                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EPlatformSKU            CallFunc_GetPlatformSKU_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EPlatform               CallFunc_GetPlatform_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_EnhancedEditionLogo_C::ExecuteUbergraph_UI_EnhancedEditionLogo(int32 EntryPoint, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class UDHGameInstance* K2Node_DynamicCast_AsDHGame_Instance, bool K2Node_DynamicCast_bSuccess, enum class EPlatformSKU CallFunc_GetPlatformSKU_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue, enum class EPlatform CallFunc_GetPlatform_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_EnhancedEditionLogo_C", "ExecuteUbergraph_UI_EnhancedEditionLogo");

	Params::UUI_EnhancedEditionLogo_C_ExecuteUbergraph_UI_EnhancedEditionLogo_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.K2Node_DynamicCast_AsDHGame_Instance = K2Node_DynamicCast_AsDHGame_Instance;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetPlatformSKU_ReturnValue = CallFunc_GetPlatformSKU_ReturnValue;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue = CallFunc_NotEqual_ByteByte_ReturnValue;
	Parms.CallFunc_GetPlatform_ReturnValue = CallFunc_GetPlatform_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}

}


