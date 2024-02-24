#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xA1 (0x3E1 - 0x340)
// WidgetBlueprintGeneratedClass WBP_MapUI_PlayerMarker.WBP_MapUI_PlayerMarker_C
class UWBP_MapUI_PlayerMarker_C : public UNWXUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x340(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      Anim_PlayerFarkle;                                 // 0x348(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                Img_fulcrum;                                       // 0x350(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                PlayerMarkerImage;                                 // 0x358(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              PlayerMarkerSizeBox;                               // 0x360(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FVector2D                             Player_Marker_Size;                                // 0x368(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Hovered;                                           // 0x378(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2853[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            PlayerMarkerHovered;                               // 0x380(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                         PartyMember_;                                      // 0x390(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                        Pad_2861[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Index;                                             // 0x394(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	TArray<struct FLinearColor>                  PartyMemberColors_Placeholder;                     // 0x398(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FString                                PlayerName;                                        // 0x3A8(0x10)(Edit, BlueprintVisible, ZeroConstructor, ExposeOnSpawn, HasGetValueTypeHash)
	struct FVector                               XYZ;                                               // 0x3B8(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          PlayerMarkerColor;                                 // 0x3D0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  FulcrumVisibility;                                 // 0x3E0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_MapUI_PlayerMarker_C* GetDefaultObj();

	class FText GetPartyMemberLocationText(double Temp_real_Variable, bool Temp_bool_Variable, double Temp_real_Variable_1, bool Temp_bool_Variable_1, double Temp_real_Variable_2, bool Temp_bool_Variable_2, double CallFunc_BreakVector_X, double CallFunc_BreakVector_Y, double CallFunc_BreakVector_Z, class FText CallFunc_Conv_StringToText_ReturnValue, bool CallFunc_EqualEqual_DoubleDouble_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, bool CallFunc_EqualEqual_DoubleDouble_ReturnValue_1, double K2Node_Select_Default, double CallFunc_Multiply_DoubleDouble_ReturnValue, double K2Node_Select_Default_1, int32 CallFunc_Round_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue_1, double CallFunc_Conv_IntToDouble_ReturnValue, int32 CallFunc_Round_ReturnValue_1, double CallFunc_Divide_DoubleDouble_ReturnValue, double CallFunc_Conv_IntToDouble_ReturnValue_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, double CallFunc_Divide_DoubleDouble_ReturnValue_1, bool CallFunc_EqualEqual_DoubleDouble_ReturnValue_2, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_2, double K2Node_Select_Default_2, double CallFunc_Multiply_DoubleDouble_ReturnValue_2, int32 CallFunc_Round_ReturnValue_2, double CallFunc_Conv_IntToDouble_ReturnValue_2, double CallFunc_Divide_DoubleDouble_ReturnValue_2, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_3, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue);
	void GetPlayerLocationText(class FText* Result, double Temp_real_Variable, bool Temp_bool_Variable, double Temp_real_Variable_1, bool Temp_bool_Variable_1, double Temp_real_Variable_2, bool Temp_bool_Variable_2, class ABP_Character_C* CallFunc_GetLocalCharacter_PlayerCharacter, const class FString& CallFunc_GetLocalPlayerName_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, double CallFunc_BreakVector_X, double CallFunc_BreakVector_Y, double CallFunc_BreakVector_Z, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, bool CallFunc_EqualEqual_DoubleDouble_ReturnValue, bool CallFunc_EqualEqual_DoubleDouble_ReturnValue_1, double K2Node_Select_Default, double K2Node_Select_Default_1, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue_1, int32 CallFunc_Round_ReturnValue, int32 CallFunc_Round_ReturnValue_1, double CallFunc_Conv_IntToDouble_ReturnValue, double CallFunc_Conv_IntToDouble_ReturnValue_1, double CallFunc_Divide_DoubleDouble_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_2, bool CallFunc_EqualEqual_DoubleDouble_ReturnValue_2, double K2Node_Select_Default_2, double CallFunc_Multiply_DoubleDouble_ReturnValue_2, int32 CallFunc_Round_ReturnValue_2, double CallFunc_Conv_IntToDouble_ReturnValue_2, double CallFunc_Divide_DoubleDouble_ReturnValue_2, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_3, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue);
	void HandleMarkerHover(bool Temp_bool_Variable, bool Temp_bool_Variable_1, class FText Temp_text_Variable, class FText Temp_text_Variable_1, class ABP_Character_C* CallFunc_GetLocalCharacter_PlayerCharacter, const class FString& CallFunc_GetLocalPlayerName_ReturnValue, bool CallFunc_IsValid_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class FText CallFunc_Conv_VectorToText_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue_1, class FText Temp_text_Variable_2, class FText K2Node_Select_Default, bool CallFunc_IsHovered_ReturnValue, class FText K2Node_Select_Default_1, bool Temp_bool_Variable_2, bool CallFunc_EqualEqual_BoolBool_ReturnValue, class FText K2Node_Select_Default_2, bool CallFunc_Not_PreBool_ReturnValue);
	class UWidget* CreateMarkerToolTip(bool Temp_bool_Variable, class UWBP_PlayerMarker_Tooltip_C* CallFunc_Create_ReturnValue, class FText CallFunc_GetPartyMemberLocationText_ReturnValue, class FText CallFunc_GetPlayerLocationText_Result, class FText K2Node_Select_Default);
	void SetPlayerMarkerColor(bool Temp_bool_Variable, const struct FLinearColor& Temp_struct_Variable, bool Temp_bool_Variable_1, const struct FLinearColor& Temp_struct_Variable_1, class UMaterialInterface* Temp_object_Variable, class UMaterialInterface* Temp_object_Variable_1, const struct FLinearColor& CallFunc_Array_Get_Item, bool CallFunc_Array_IsValidIndex_ReturnValue, bool Temp_bool_Variable_2, const struct FLinearColor& K2Node_Select_Default, class UMaterialInterface* K2Node_Select_Default_1, const struct FLinearColor& K2Node_Select_Default_2, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void SetPlayerMarkerSize(const struct FVector2D& Player_Marker_Size, double CallFunc_BreakVector2D_X, double CallFunc_BreakVector2D_Y, double CallFunc_SafeDivide_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_SafeDivide_ReturnValue_1, double CallFunc_Multiply_DoubleDouble_ReturnValue_1, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, float CallFunc_SetWidthOverride_InWidthOverride_ImplicitCast, float CallFunc_SetHeightOverride_InHeightOverride_ImplicitCast);
	void Construct();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void Play_Farkle(int32 NumLoopsToPlay);
	void ExecuteUbergraph_WBP_MapUI_PlayerMarker(int32 EntryPoint, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, int32 K2Node_CustomEvent_NumLoopsToPlay, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
	void PlayerMarkerHovered__DelegateSignature(class FText Header, class FText Subheader, class FText Body, bool Hovered);
};

}


