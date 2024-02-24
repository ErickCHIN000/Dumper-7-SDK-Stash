#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x6E (0x29E - 0x230)
// WidgetBlueprintGeneratedClass CompassTarget_v3.CompassTarget_v3_C
class UCompassTarget_v3_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x230(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UTextBlock*                            DistanceText;                                      // 0x238(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Icon;                                              // 0x240(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	enum class EUIMapTrackingActorType           TrackingType;                                      // 0x248(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                        Pad_DE[0x7];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	struct FMapObjectInfo                        TargetMapObject;                                   // 0x250(0x40)(Edit, BlueprintVisible, ExposeOnSpawn)
	class ASHPlayerState*                        PlayerState;                                       // 0x290(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	int32                                        Distance;                                          // 0x298(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EPlayerUIColor                    SavedPlayerColor;                                  // 0x29C(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsLocalPlayer;                                     // 0x29D(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UCompassTarget_v3_C* GetDefaultObj();

	class FText GetText_0(class FText CallFunc_MakeLiteralText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue);
	void Construct();
	void ExecuteUbergraph_CompassTarget_v3(int32 EntryPoint, enum class EUIMapTrackingActorType Temp_byte_Variable, class UTexture2D* Temp_object_Variable, class UTexture2D* Temp_object_Variable_1, enum class EUIMapTrackingActorType Temp_byte_Variable_1, const struct FLinearColor& Temp_struct_Variable, const struct FLinearColor& Temp_struct_Variable_1, const struct FLinearColor& Temp_struct_Variable_2, enum class EUIMapTrackingActorType Temp_byte_Variable_2, const struct FLinearColor& Temp_struct_Variable_3, const struct FLinearColor& Temp_struct_Variable_4, enum class EInterestZoneType Temp_byte_Variable_3, class UTexture2D* Temp_object_Variable_2, class UTexture2D* Temp_object_Variable_3, class UTexture2D* Temp_object_Variable_4, class UTexture2D* Temp_object_Variable_5, class UTexture2D* Temp_object_Variable_6, class UTexture2D* Temp_object_Variable_7, class UTexture2D* Temp_object_Variable_8, class UTexture2D* Temp_object_Variable_9, class UTexture2D* Temp_object_Variable_10, class UTexture2D* Temp_object_Variable_11, class UTexture2D* Temp_object_Variable_12, class UTexture2D* Temp_object_Variable_13, class UTexture2D* Temp_object_Variable_14, class UTexture2D* Temp_object_Variable_15, class UTexture2D* Temp_object_Variable_16, class UTexture2D* Temp_object_Variable_17, class UTexture2D* Temp_object_Variable_18, class UTexture2D* Temp_object_Variable_19, class UTexture2D* Temp_object_Variable_20, class UTexture2D* Temp_object_Variable_21, class UTexture2D* Temp_object_Variable_22, class UTexture2D* Temp_object_Variable_23, class UTexture2D* Temp_object_Variable_24, class UTexture2D* Temp_object_Variable_25, enum class EPlayerUIColor Temp_byte_Variable_4, const struct FLinearColor& Temp_struct_Variable_5, const struct FLinearColor& Temp_struct_Variable_6, const struct FLinearColor& Temp_struct_Variable_7, const struct FLinearColor& Temp_struct_Variable_8, enum class EPlayerUIColor Temp_byte_Variable_5, class UTexture2D* Temp_object_Variable_26, class UTexture2D* Temp_object_Variable_27, class UTexture2D* Temp_object_Variable_28, class UTexture2D* Temp_object_Variable_29, enum class EUIMapTrackingActorType Temp_byte_Variable_6, class UTexture2D* Temp_object_Variable_30, class UTexture2D* Temp_object_Variable_31, class UTexture2D* Temp_object_Variable_32, bool CallFunc_IsValid_ReturnValue, class UTexture2D* K2Node_Select_Default, const class FString& CallFunc_GetPlayerName_ReturnValue, class UTexture2D* K2Node_Select_Default_1, const struct FLinearColor& K2Node_Select_Default_2, class UTexture2D* K2Node_Select_Default_3, const struct FLinearColor& K2Node_Select_Default_4, const struct FSlateColor& K2Node_MakeStruct_SlateColor, const struct FLinearColor& K2Node_Select_Default_5, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, const class FString& CallFunc_GetPlayerName_ReturnValue_1, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_EqualEqual_StrStr_ReturnValue, class UTexture2D* Temp_object_Variable_33, class UTexture2D* K2Node_Select_Default_6, bool CallFunc_EqualEqual_ByteByte_ReturnValue);
};

}


