#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x89 (0x89 - 0x0)
// UserDefinedStruct S_MarkerData.S_MarkerData
struct FS_MarkerData
{
public:
	TArray<enum class E_MarkerType>              MarkerType_3_E05472C94145779154FD1FB283873508;     // 0x0(0x10)(Edit, BlueprintVisible, SaveGame)
	class UMaterialInstance*                     MarkerMaterial_7_C682CEC649F7388A0280D38C3A651AE3; // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                            MarkerTexture_10_217A4B4A49F28BE075685196E3EC66CD; // 0x18(0x8)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, NoDestructor, HasGetValueTypeHash)
	bool                                         AlwaysOnScreen_13_8D3C39E74172BA3C2BE5F28A8F96D638; // 0x20(0x1)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3210[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               Padding_16_4E9D96E2473E6819D1DF94BBA6F2C30D;       // 0x28(0x18)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             TextureSize_30_0FC614D34939DCCA4077899925344EDF;   // 0x40(0x10)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                Text_29_5E7A698C4B5AC497BBB438A55515B853;          // 0x50(0x10)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, HasGetValueTypeHash)
	struct FVector2D                             TextSize_33_ADA10B73491C7DD1835FD69801CC42F1;      // 0x60(0x10)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_PlayerMarker_C*                    WorldActor_36_9B1230EE4019D3D5E46DDAB2E43793D2;    // 0x70(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, SaveGame, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          Color_40_AB92BD2E4886BEC45F39A59226A8B872;         // 0x78(0x10)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CompassMarker__45_173EEC314B156D67370A86A9FF973EA4; // 0x88(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}


