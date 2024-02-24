#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x298 - 0x280)
// BlueprintGeneratedClass BP_HelpPing.BP_HelpPing_C
class ABP_HelpPing_C : public ABP_EmptyLocationPing_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x280(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USphereComponent*                      Sphere;                                            // 0x288(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class ASophiaCharacter*                      PlayerRef;                                         // 0x290(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_HelpPing_C* GetDefaultObj();

	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_HelpPing(int32 EntryPoint, class UZoneData* CallFunc_GetZoneData_ReturnValue, bool CallFunc_IsValid_ReturnValue, class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue, bool CallFunc_IsDedicatedServer_ReturnValue, class ASophiaCharacter* K2Node_DynamicCast_AsSophia_Character, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Not_PreBool_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_NotEqual_ObjectObject_ReturnValue, class ASophiaHUD* CallFunc_BP_GetFirstLocalPlayerHUD_hud, bool CallFunc_BP_GetFirstLocalPlayerHUD_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class ABP_SophiaHUD_C* K2Node_DynamicCast_AsBP_Sophia_HUD, bool K2Node_DynamicCast_bSuccess_1, class UWBP_GameHUD_C* K2Node_DynamicCast_AsWBP_Game_HUD, bool K2Node_DynamicCast_bSuccess_2, class APlayerController* CallFunc_GetPlayerController_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, class UWBP_AmbassadorHelpNotification_C* CallFunc_Create_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const class FString& CallFunc_GetPlayerName_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, float CallFunc_GetDistanceTo_ReturnValue, enum class EMainMapZoneName CallFunc_GetZoneType_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, class UZoneDataEntry* CallFunc_ZoneEnum_to_Zone_ReturnValue, class FText CallFunc_Conv_FloatToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_2, bool CallFunc_NotEqual_StrStr_ReturnValue, const class FString& CallFunc_SelectString_ReturnValue, class AFirstPersonCharacter_C* K2Node_DynamicCast_AsFirst_Person_Character, bool K2Node_DynamicCast_bSuccess_3, class FText CallFunc_Conv_StringToText_ReturnValue_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_3, bool CallFunc_IsValid_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_4, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_4, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue);
};

}


