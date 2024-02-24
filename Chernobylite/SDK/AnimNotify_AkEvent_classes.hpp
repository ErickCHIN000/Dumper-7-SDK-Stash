#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x39 (0x71 - 0x38)
// BlueprintGeneratedClass AnimNotify_AkEvent.AnimNotify_AkEvent_C
class UAnimNotify_AkEvent_C : public UAnimNotify
{
public:
	class FString                                Attach_Name;                                       // 0x38(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	class UAkAudioEvent*                         Event;                                             // 0x48(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Follow;                                            // 0x50(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1533[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                EventName;                                         // 0x58(0x10)(Edit, BlueprintVisible, ZeroConstructor, AdvancedDisplay, HasGetValueTypeHash)
	class FName                                  UseCustomComponentByName;                          // 0x68(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                         UseDefaultWhenCustomNotFound;                      // 0x70(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)

	static class UClass* StaticClass();
	static class UAnimNotify_AkEvent_C* GetDefaultObj();

	void GetAkComponentByName(class USkeletalMeshComponent* SkeletalMesh, class FName Name, class UAkComponent** FoundAK, class AActor* TrueOwner, class AActor* CallFunc_GetOwner_ReturnValue, int32 Temp_int_Array_Index_Variable, class ACGFakeHero* K2Node_DynamicCast_AsCGFake_Hero, bool K2Node_DynamicCast_bSuccess, int32 Temp_int_Loop_Counter_Variable, TArray<class UAkComponent*>& CallFunc_K2_GetComponentsByClass_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class UAkComponent* CallFunc_Array_Get_Item, const class FString& CallFunc_GetObjectName_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class APawn* CallFunc_GetPlayerPawn_ReturnValue, const class FString& CallFunc_Conv_NameToString_ReturnValue, bool CallFunc_Array_Contains_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue);
	bool Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, FDelegateProperty_ Temp_delegate_Variable, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, FDelegateProperty_ Temp_delegate_Variable_1, TArray<struct FAkExternalSourceInfo>& Temp_struct_Variable, class UAkComponent* CallFunc_GetAkComponentByName_FoundAK, bool CallFunc_NotEqual_NameName_ReturnValue, bool CallFunc_IsValid_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, const class FString& CallFunc_GetDisplayName_ReturnValue, const class FString& CallFunc_GetDisplayName_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, TArray<struct FAkExternalSourceInfo>& Temp_struct_Variable_1, int32 CallFunc_PostAkEvent_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue, bool CallFunc_GetAkComponent_ComponentCreated, class UAkComponent* CallFunc_GetAkComponent_ReturnValue, int32 CallFunc_PostAkEvent_ReturnValue_1, int32 CallFunc_PostEventAtLocation_ReturnValue, bool CallFunc_IsValid_ReturnValue_1);
};

}


