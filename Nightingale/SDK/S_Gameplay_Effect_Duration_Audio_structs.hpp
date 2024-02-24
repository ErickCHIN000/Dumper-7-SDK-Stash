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

// 0x58 (0x58 - 0x0)
// UserDefinedStruct S_Gameplay_Effect_Duration_Audio.S_Gameplay_Effect_Duration_Audio
struct FS_Gameplay_Effect_Duration_Audio
{
public:
	TSoftObjectPtr<class UAkAudioEvent>          AudioEventStart_5_A68E28DB4FB15451EAC81DA5135FB088; // 0x0(0x28)(Edit, BlueprintVisible, HasGetValueTypeHash)
	TSoftObjectPtr<class UAkAudioEvent>          AudioEventStop_7_19B644D14A0807A217AD74B415C869A0; // 0x28(0x28)(Edit, BlueprintVisible, HasGetValueTypeHash)
	class UAkRtpc*                               DurationRTPC_10_D14E531A4CD5EE55F49A8B87D1F63276;  // 0x50(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

}


