#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x22 (0x11A - 0xF8)
// BlueprintGeneratedClass DebugHudComponent.DebugHudComponent_C
class UDebugHudComponent_C : public UTTLDebugHUDComponent
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xF8(0x8)(Transient, DuplicateTransient)
	class UAIDebugWidget_C*                      AIDebugWidget;                                     // 0x100(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommunicationTalkDebugWidget_C*       CommunicationTalkDebugWidget;                      // 0x108(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UDebugPlayerFlagWidget_C*              PlayerFlagWidget;                                  // 0x110(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         FlagWidgetsInitialized;                            // 0x118(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         IsPressedPadA;                                     // 0x119(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UDebugHudComponent_C* GetDefaultObj();

	void InitializePlayerFlagWidget(class UDebugPlayerFlagWidget_C* CallFunc_Create_ReturnValue);
	void SetWidgetVisible(class UUserWidget*& Widget, bool Visible, bool CallFunc_IsVisible_ReturnValue, bool CallFunc_BooleanNAND_ReturnValue);
	void CommunicationTalkDebugInitialize(class UCommunicationTalkDebugWidget_C* CallFunc_Create_ReturnValue);
	void SetTabNext(bool CallFunc_IsShowDebugWidget_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void SetCursorPrev(int32 CallFunc_MakeLiteralInt_ReturnValue, int32 Temp_int_Variable, int32 Temp_int_Variable1, uint8 CallFunc_Conv_IntToByte_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, uint8 CallFunc_GetValidValue_ReturnValue, uint8 CallFunc_Conv_IntToByte_ReturnValue1, bool K2Node_SwitchEnum_CmpSuccess, uint8 CallFunc_GetEnumeratorValueFromIndex_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Conv_ByteToInt_ReturnValue, bool CallFunc_IsShowDebugWidget_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void SetCursorNext(int32 CallFunc_MakeLiteralInt_ReturnValue, int32 Temp_int_Variable, int32 Temp_int_Variable1, uint8 CallFunc_Conv_IntToByte_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, uint8 CallFunc_GetValidValue_ReturnValue, uint8 CallFunc_Conv_IntToByte_ReturnValue1, bool K2Node_SwitchEnum_CmpSuccess, uint8 CallFunc_GetEnumeratorValueFromIndex_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Conv_ByteToInt_ReturnValue, bool CallFunc_IsShowDebugWidget_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void AIDebugInitialize(class UAIDebugWidget_C* CallFunc_Create_ReturnValue);
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void ExecuteUbergraph_DebugHudComponent(int32 EntryPoint, int32 Temp_int_Variable, int32 Temp_int_Variable1, uint8 CallFunc_Conv_IntToByte_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, uint8 CallFunc_GetValidValue_ReturnValue, uint8 CallFunc_Conv_IntToByte_ReturnValue1, bool K2Node_SwitchEnum_CmpSuccess, uint8 CallFunc_GetEnumeratorValueFromIndex_ReturnValue, int32 CallFunc_Conv_ByteToInt_ReturnValue, float K2Node_Event_DeltaSeconds, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue1, int32 CallFunc_MakeLiteralInt_ReturnValue, bool CallFunc_IsShowDebugWidget_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsShowDebugWidget_ReturnValue1, bool CallFunc_IsValid_ReturnValue2, bool CallFunc_IsValid_ReturnValue3, bool CallFunc_IsShowDebugWidget_ReturnValue2, bool CallFunc_IsValid_ReturnValue4, bool CallFunc_IsValid_ReturnValue5);
};

}


