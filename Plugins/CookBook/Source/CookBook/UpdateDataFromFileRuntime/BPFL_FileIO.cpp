// Fill out your copyright notice in the Description page of Project Settings.


#include "BPFL_FileIO.h"
#include "E:\Program_Files\UnrealEngine-4.22\Engine\Source\Runtime\Core\Public\Misc\Paths.h"
#include "E:\Program_Files\UnrealEngine-4.22\Engine\Source\Runtime\Core\Public\HAL\PlatformFilemanager.h"
#include "E:\Program_Files\UnrealEngine-4.22\Engine\Source\Runtime\Core\Public\GenericPlatform\GenericPlatformFile.h"

FString UBPFL_FileIO::LoadFileToString(FString Filename)
{
	FString ContentMulu=FPaths::ProjectContentDir();//访问Content目录
	FString result;
	IPlatformFile& Pingtai=FPlatformFileManager::Get().GetPlatformFile();

	if (Pingtai.CreateDirectory(*ContentMulu))//若content目录存在
	{
		FString myFile=ContentMulu+"/"+Filename;
		FFileHelper::LoadFileToString(result,*myFile);		
	}
	return result;
}

TArray<FString> UBPFL_FileIO::LoadFileToStringArray(FString Filename)
{
	FString ContentMulu = FPaths::ProjectContentDir();//
	TArray<FString> result;
	IPlatformFile& Pingtai = FPlatformFileManager::Get().GetPlatformFile();

	if (Pingtai.CreateDirectory(*ContentMulu))
	{
		FString myFile = ContentMulu + "/" + Filename;
		FFileHelper::LoadFileToStringArray(result, *myFile);
	}
	return result;

}
